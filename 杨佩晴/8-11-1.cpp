// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Shape {
public:
	Shape() {}
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
	int getVertexCount();
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
private:
	float a;
};
int Shape::getVertexCount(){
	if (dynamic_cast<Circle*>(const_cast<Shape*>(this)) != 0)
		return 0;
	else if (dynamic_cast<Rectangle*>(const_cast<Shape*>(this)) != 0 || dynamic_cast<Square*>(const_cast<Shape*>(this)) != 0)
		return 4;
	else
		return -1;
	}


int main() {
	Shape *p;
	p = new Rectangle(2, 3);
	cout<<p->getVertexCount()<<endl;
	delete p;
	p = new Circle(3);
	cout<<p->getVertexCount()<<endl;
	delete p;
	p = new Square(5);
	cout<<p->getVertexCount()<<endl;
	delete p;
	return 0;
}