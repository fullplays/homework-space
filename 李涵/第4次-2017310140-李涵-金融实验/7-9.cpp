K BG// ConsoleApplication3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Base {
public:
	int fn1() const { return 1; };
	int fn2() const { return 2; };
};
class Derived :private Base {
public:
	int fn1() const { return Base::fn1(); };
	int fn2() const { return Base::fn2(); };
};
int main() {
	Derived a;
	a.fn1();
	return 0;
}