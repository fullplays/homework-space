// 7-9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Base {
public:
	void fn1() {
		return 1;
	}
	void fn2() { 
		return 2;
	}
};

class Derived: private Base {
public:
	void fn1() { return Base:: fn1(); }
	void fn2() { return Base:: fn2(); }

};

int main() {
	Derived d;
	d.fn1();
	return 0;
}