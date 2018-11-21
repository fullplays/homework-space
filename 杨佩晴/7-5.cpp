// 7-5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Shape {
public:
	void getArea() {
		cout << "We will add the area up!" << endl;
	}
};

class Rectangle :public Shape {
public:
	void getArea(float a, float b) {
		s = 0.5*a*b;
		cout << s;
	}
private:
	float s;
};

class Circle:public Shape{
public:
	void getArea(float r) {
		s = 3.14*r*r;
	}
private:
	float s;
};

class Square:public Rectangle{
public:
	void getArea(float a, float b) {
		s = a * b;
	}
private:
	float s;

};