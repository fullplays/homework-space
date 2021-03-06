// 8-7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Point {
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void get() { cout << "(" << x << "," << y << ")" << endl; }
	Point operator++();
	Point operator++(int);
	Point operator--();
	Point operator--(int);
private:
	int x, y;
};

Point Point::operator++(){
	x++;
	y++;
	return *this;
}

Point Point::operator++(int) {
	return *this;
	x++;
	y++;
}
Point Point::operator--() {
	x--;
	y--;
	return *this;
}

Point Point::operator--(int) {
	return *this;
	x--;
	y--;
}
int main() {
	Point p1(2, 3), p2(5, 6);
	p1.get();
	p1++.get();
	(++p1).get();
	p2.get();
	p2--.get();
	(--p2).get();
}