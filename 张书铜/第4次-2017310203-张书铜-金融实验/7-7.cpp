// ConsoleApplication15.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Base
{public:
	Base();
};
Base::Base()
{
	cout << "构造基类对象" << endl;
}

class Derived:public Base
{public:
	Derived();
};
Derived::Derived()
{
	cout << "构造派生类对象" << endl;
}

int main()
{
	Derived d;
	return 0;
}

