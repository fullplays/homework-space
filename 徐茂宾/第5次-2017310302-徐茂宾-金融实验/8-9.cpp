// 8-9.cpp

#include "pch.h"
#include<iostream>
using namespace std;

class BaseClass {
public:
	BaseClass() {
		cout << "调用基类构造函数" << endl;
	}
	virtual ~BaseClass() {
		cout << "调用基类虚析构函数" << endl;
	}

};

class ​​DerivedClass:public BaseClass {
public:
	DerivedClass() {
		cout << "调用派生构造函数" << endl;
	}
	~DerivedClass () {
		cout << "调用派生类析构函数" << endl;
	}

};

int main()
{
	BaseClass * b = new DerivedClass;
	delete b;
	return 0;
}