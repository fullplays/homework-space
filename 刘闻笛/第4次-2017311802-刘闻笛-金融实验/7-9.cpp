// 7-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class base {
public:
	int fn1()const { return 1; }
	int fn2()const { return 2; }
};
class derived :private base {
public:
	int fn1() { return base::fn1(); };
	int fn2() { return base::fn2(); };
};
int main()
{
	derived a;
	a.fn1();
    return 0;
}

