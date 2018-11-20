// ConsoleApplication16.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Base
{public:
	int fn1() const { return 1; }
	int fn2() const { return 2; }
};

class Derived:private Base
{public:
	int fn1() { return Base::fn1(); };
	int fn2() { return Base::fn2(); };
};

int main()
{
	Derived a;
	a.fn1();
	return 0;
}

