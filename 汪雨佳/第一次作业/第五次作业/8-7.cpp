// 8-7.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class Point
{
public:
	Point() { x = y = 0; }
	~Point(){}
	int getx() { return x; }
	int gety() { return y; }

	Point& operator++();
	Point operator++(int);

	Point& operator--();
	Point operator--(int);
private:
	int x, y;
};

Point& Point::operator++()
{
	x++;
	y++;
	return *this;
}

Point Point::operator++(int)
{
	Point t = *this;
	++*this;
	return t;
}

Point& Point::operator--()
{
	x--;
	y--;
	return *this;
}

Point Point::operator--(int)
{
	Point t = *this;
	--*this;
	return t;
}

int main()
{
	Point p;
	cout << "p:(" << p.getx() << "," << p.gety() << ")" << endl;
	p++;
	cout << "p:(" << p.getx() << "," << p.gety() << ")" << endl;
	++p;
	cout << "p:(" << p.getx() << "," << p.gety() << ")" << endl;
	p--;
	cout << "p:(" << p.getx() << "," << p.gety() << ")" << endl;
	--p;
	cout << "p:(" << p.getx() << "," << p.gety() << ")" << endl;
	return 0;
}