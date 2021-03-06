// ConsoleApplication14.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Shape
{public:
	Shape() {}
	~Shape() {}
	virtual float getArea() { return -1; }
};

class Circle:public Shape
{public:
	Circle(float radius) :itsRadius(radius) {}
	~Circle() {}
	float getArea() { return 3.14*itsRadius*itsRadius; }
private:
	float itsRadius;
};

class Rectangle:public Shape
{public:
	Rectangle(float len, float width) :itsLength(len), itsWidth(width) {};
	~Rectangle() {};
	virtual float getArea() { return itsLength * itsWidth; }
	virtual float getLength() { return itsLength; }
	virtual float getWidth() { return itsWidth; }
private:
	float itsWidth;
	float itsLength;
};

class Square:public Rectangle
{public:
	Square(float len);
	~Square() {}
};

Square::Square(float len) :
	Rectangle(len, len)
{
}

int main() 
{
	Shape*sp;

	sp = new Circle(3);
	cout << "圆的面积是" << sp->getArea() << endl;
	delete sp;
	sp = new Rectangle(2, 3);
	cout << "矩形的面积是" << sp->getArea() << endl;
	delete sp;
	sp = new Square(3);
	cout << "正方形的面积是" << sp->getArea() << endl;
	delete sp;
	return 0;
}