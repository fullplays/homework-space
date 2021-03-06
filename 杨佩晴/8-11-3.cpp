// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Shape {
public:
	Shape() {}
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
	virtual void getVertexCount() = 0;
private:
	float x, y;
};
class Rectangle :public Shape {
public:
	Rectangle(float x, float y) { this->x = x; this->y = y; };
	float getArea() {
		return x * y;
	}
	float getPerim() {
		return 2 * (x + y);
	}
	void getVertexCount() {
		cout << "顶点为4" << endl;
	}
private:
	float x, y;
};

class Circle :public Shape {
public:
	Circle(float r) { this->r = r; }
	float getArea() {
		return 3.14*r*r / 2;
	}
	float getPerim() {
		return 2 * 3.14*r;
	}
	void getVertexCount() {
		cout << "顶点为0" << endl;
	}
private:
	float r;
};
class Square :public Rectangle {
public:
	Square(float a) :Rectangle(a, a) {
		this->a = a;
	}
	float getArea() {
		return a * a;
	}
	float getPerim() {
		return 4 * a;
	}
	void getVertexCount() {
		cout << "顶点为4" << endl;
	}
private:
	float a;
};

int main() {
	Shape *p;
	p = new Rectangle(2.5, 3.2);
	p->getVertexCount();
	delete p;
	p = new Circle(3.6);
	p->getVertexCount();
	delete p;
	p = new Square(5.5);
	p->getVertexCount();
	delete p;
	return 0;
}