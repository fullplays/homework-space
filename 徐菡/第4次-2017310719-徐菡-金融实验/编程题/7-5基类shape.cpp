// 7-5����shape.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Shape{
public:
	Shape(){};
	~Shape(){};
	double getRadius(double r){ return r; };
};

class Rectangle:public Shape{
public:
	double getLength(){ return length; };
	double getWidth(){ return width; };
	double getArea();
	Rectangle(double a, double b):length(a),width(b){};
	Rectangle(){};
	~Rectangle(){};
private:
	double length, width;
};

double Rectangle::getArea(){
	return length*width;
}

class Circle:public Shape{
public:
	Circle(double r):radius(r){};
	double getRadius(){ return radius; };
	double getArea();
	~Circle(){};
private:
	double radius;
};

double Circle::getArea(){ return 3.14*radius*radius; }

class Square :public Rectangle{
public:
	Square(double a) :Rectangle(a, a){};
	~Square(){};
};

int main()
{
	Rectangle A(2, 3);
	Circle B(4);
	Square C(5);
	cout << "����A�����Ϊ" << A.getArea() << endl;
	cout << "ԲB�����Ϊ" << B.getArea() << endl;
	cout << "������C�����Ϊ" << C.getArea() << endl;
	return 0;
}

