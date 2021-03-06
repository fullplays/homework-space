// 8-4.cpp

#include "pch.h"
#include<iostream>
using namespace std;

class Counter {
public:
	Counter(unsigned short inputnumber) :number(inputnumber) {}
	~Counter() {}
	unsigned short getnumber() {
		return number;
	}
	Counter operator+(Counter a) {
		return Counter(number + a.getnumber());
	}
private:
	unsigned short number;
};

int main()
{
	Counter a(1), b(4), c(5);
	Counter d = a + b + c;
	cout << "d：" << d.getnumber();
	return 0;
}