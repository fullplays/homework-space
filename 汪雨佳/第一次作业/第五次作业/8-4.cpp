// 8-4.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class Counter
{
public:
	Counter() :value(0) {}
	Counter(unsigned short ival):value(ival){}
	~Counter() {}
	unsigned short getvalue()const { return value; }
	void setvalue(unsigned short x) { value = x; }
	Counter operator+(const Counter &);
private:
	unsigned value;
};

Counter Counter::operator+(const Counter & c)
{
	return Counter(value + c.getvalue());
}

int main()
{
	Counter num1(1), num2(2), num3;
	num3 = num1 + num2;
	cout << "num1=" << num1.getvalue() << endl;
	cout << "num2=" << num2.getvalue() << endl;
	cout << "num3=" << num3.getvalue() << endl;
	return 0;
}