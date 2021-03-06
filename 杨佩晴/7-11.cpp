// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class BaseClass {
public:
	void fun1() {
		cout << "BaseClass fun1" << endl;
	}
	void fun2() {
		cout << "BaseClass fun2" << endl;
	}
};

class DerivedClass :public BaseClass{
public:
	void fun1() {
		cout << "DerivedClass fun1" << endl;
	}
	void fun2() {
		cout << "DerivedClass fun2" << endl;
	}
};

int main() {
	DerivedClass a;
	DerivedClass *b = new DerivedClass;
	BaseClass *c = new BaseClass;
	a.fun1();
	a.fun2();
	b->fun1();
	b->fun2();
	c->fun1();
	c->fun1();
	return 0;
}