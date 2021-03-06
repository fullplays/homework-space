// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Point {
public:
	Point(int x,int y){
		this->x=x;
		this->y = y;	//注意不能写成y=this->y！！！那样子逻辑是错误的！
	}
	Point() {};
	friend void operator+(Point p1, Point p2);
private:
	int x, y;
};
void operator+(Point p1, Point p2) {
	cout << "(" << p1.x + p2.x << "," << p1.y + p2.y << ")" << endl;
}

int main() {
	Point p1(3, 4), p2(4, 6);
	cout <<  "p1(3,4)+p2(4,6)=";
	p1 + p2;
	return 0;
}
