// 8-9.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class BaseClass
{
public:
	BaseClass() {}
	virtual ~BaseClass() {
		cout << "Base destructor" << endl;
	}
};

class DerivedClass :public BaseClass
{
public:
	DerivedClass(){}
	~DerivedClass() {
		cout << "Derived destructor" << endl;
	}
};

int main()
{
	BaseClass *p = new DerivedClass;
	delete p;
	return 0;
}