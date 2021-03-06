#include "pch.h"
#include <iostream>
using namespace std;

class Point {
public:
	Point &operator++();
	Point operator++(int);
	Point &operator--();
	Point operator--(int);
	Point() { _x = _y = 0; }
	int x() { return _x; }
	int y() { return _y; }
private:
	int _x, _y;
};
Point &Point::operator++() {
	_x++;
	_y++;
	return *this;
}
Point Point::operator++(int) {
	Point t = *this;
	++*this;
	return t;
}
Point &Point::operator--() {
	_x--;
	_y--;
	return *this;
}
Point Point::operator--(int) {
	Point t = *this;
	--*this;
	return t;
}
int main() {
	Point a;
	cout << "a的值是：" << a.x() << "," << a.y() << endl;
	a++;
	cout << "a的值是：" << a.x() << "." << a.y() << endl;
	++a;
	cout << "a的值是：" << a.x() << "." << a.y() << endl;
	--a;
	cout << "a的值是：" << a.x() << "." << a.y() << endl;
	a--;
	cout << "a的值是：" << a.x() << "," << a.y() << endl;
	return 0;
}