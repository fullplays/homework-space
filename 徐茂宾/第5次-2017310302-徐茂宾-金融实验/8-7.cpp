// 8-7.cpp 

#include "pch.h"
#include<iostream>
using namespace std;

class Point {
public:
	Point(int inx, int iny) :x(inx), y(iny) {}
	Point operator ++() { return Point(x++,y++); }
	Point operator ++(int) { return Point(++x,++y); }
	Point operator --() { return Point(x--,y--); }
	Point operator --(int) { return Point(--x,--y); }
	void returnxy() { cout << "(" << x << "," << y << ")" << endl; }
private:
	int x, y;
};

int main()
{
	Point a(5, 6);
	a++;
	a.returnxy();
	a--;
	a.returnxy();
	++a;
	a.returnxy();
	--a;
	a.returnxy();
	return 0;
}