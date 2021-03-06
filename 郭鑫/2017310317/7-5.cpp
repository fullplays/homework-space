#include "pch.h"
#include <iostream>
using namespace std;

class Shape {
public:
	Shape() {};
	~Shape() {};
	virtual float getarea() { return -1; }
};
class Circle:public Shape {
public:
	Circle(float radius):itsradius(radius){}
	~Circle() {};
	float getarea() { return 3.14*itsradius*itsradius; }
private:
	float itsradius;
};
class Rectangle :public Shape {
public:
	Rectangle(float len, float width) :itslength(len), itswidth(width) {};
	~Rectangle() {};
	virtual float getarea() { return itslength * itswidth; }
	virtual float getlength() { return itslength; }
	virtual float getwidth() { return itswidth; }
private:
	float itslength;
	float itswidth;
};
class Square :public Rectangle {
public:
	Square(float len);
	~Square(){}
};
Square::Square(float len) :
	Rectangle(len,len){}
int main() {
	Shape *sp;
	sp = new Circle(5);
	cout << "the area of the circle is " << sp->getarea() << endl;
	delete sp;
	sp = new Rectangle(4, 6);
	cout << "the area of the rectangle is " << sp->getarea() << endl;
	delete sp;
	sp = new Square(5);
	cout << "the area of the square is " << sp->getarea() << endl;
	delete sp;
	return 0;
}