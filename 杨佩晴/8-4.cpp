// 8-4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Counter {
public:
	Counter(int xx) :x(xx) { cout << "Couner1" << endl; }
	Counter() { cout << "Counter2" << endl; }
	int getx() {
		return x;
	}
	Counter operator+(Counter&c) {
		return Counter(x + c.x);
	}
private:
	int x;
};
int main() {
	Counter c1(2), c2(3), c3;
	c3=c1+c2;
	cout << c1.getx() << endl;
	cout << c2.getx() << endl;
	cout << c3.getx() << endl;
}