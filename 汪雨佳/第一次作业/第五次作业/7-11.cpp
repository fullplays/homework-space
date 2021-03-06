// 7-11.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class BaseClass
{
public:
	void fn1() { cout << "fn1 of Base" << endl; }
	void fn2() { cout << "fn2 of Base" << endl; }
};

class DerivedClass :public BaseClass
{
public:
	void fn1() { cout << "fn1 of Derived" << endl; }
	void fn2() { cout << "fn2 of Derived" << endl; }
};

int main()
{
	DerivedClass d;
	DerivedClass * pd = &d;
	BaseClass * pb = &d;
	d.fn1();
	d.fn2();
	pd->fn1();
	pd->fn2();
	pb->fn1();
	pb->fn2();
	return 0;
}