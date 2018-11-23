// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Shape {
public:
	Shape() {}
	~Shape() {}
	virtual float getArea() { return -1; };
};
class Circle :public Shape {
public:
	Circle(float rad) :radius(rad) {};
	~Circle() {}
	float getArea() { return 3 * radius*radius; }
private:
	float radius;
};
class Rectangle :public Shape {
public:
	Rectangle(float len, float wid) :length(len), width(wid) {};
	~Rectangle() {}
	virtual float getArea() { return length*width; }
	virtual float getlength() { return length; }
	virtual float getwidth() { return width; }
private:
	float length;
	float width;
};
class Square :public Rectangle {
public:
	Square(float len);
	~Square(){}
};
Square::Square(float len):
	Rectangle(len,len){}
int main() {
	Shape*sp;
	sp = new Circle(3);
	cout << "The area is " << sp->getArea() << endl;
	delete sp;
	sp = new Rectangle(4, 5);
	cout << "The area is " << sp->getArea() << endl;
	delete sp;
	sp = new Square(2);
	cout << "The area is " << sp->getArea() << endl;
	delete sp;
	return 0;
}