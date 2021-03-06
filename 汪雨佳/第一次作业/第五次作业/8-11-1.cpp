// 8-11-1.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(){}
	~Shape(){}
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
	int getVertexCount() const;
};

class Circle : public Shape
{
public:
	Circle(float radius):itsRadius(radius){}
	~Circle(){}
	float getArea() { return 3.14 * itsRadius * itsRadius; }
	float getPerim() { return 6.28 * itsRadius; }
private:
	float itsRadius;
};

class Rectangle : public Shape
{
public:
	Rectangle(float len, float width) :itsLength(len), itsWidth(width) {}
	~Rectangle(){}
	virtual float getLength() { return itsLength; }
	virtual float getWidth() { return itsWidth; }
	virtual float getArea() { return itsLength * itsWidth; }
	float getPerim() { return 2 * itsLength + 2 * itsWidth; }
protected:
	float itsWidth;
	float itsLength;
};

class Square : public Rectangle
{
public:
	Square(float len) :Rectangle(len, len) {}
	~Square(){}
	virtual float getArea() { return itsLength * itsWidth; }
	float getPerim() { return 2 * itsLength + 2 * itsWidth; }
	virtual float getLength() { return itsLength; }
	virtual float getWidth() { return itsWidth; }
};

int Shape::getVertexCount() const
{
	if (dynamic_cast<Circle*>(const_cast<Shape*>(this)) != 0)
	{
		return 0;
	}
	else if (dynamic_cast<Rectangle*>(const_cast<Shape*>(this)) != 0 ||
		dynamic_cast<Square*>(const_cast<Shape*>(this)) != 0)
		return 1;
	else
		return -1;
}

int main()
{
	Shape * s;
	s = new Circle(3);
	cout << "The area of the Circle is " << s->getArea() << endl;
	cout << "The perimeter of the Circle is " << s->getPerim() << endl;
	cout << "The vertex count of the Circle is " << s->getVertexCount() << endl;
	delete s;
	s = new Rectangle(1, 2);
	cout << "The area of the Rectangle is " << s->getArea() << endl;
	cout << "The perimeter of the Rectangle is " << s->getPerim() << endl;
	cout << "The vertex count of the Rectangle is " << s->getVertexCount() << endl;
	delete s;
	s = new Square(4);
	cout << "The area of the Square is " << s->getArea() << endl;
	cout << "The perimeter of the Square is " << s->getPerim() << endl;
	cout << "The vertex count of the Square is " << s->getVertexCount() << endl;
	delete s;
	return 0;
}