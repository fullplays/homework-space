// 8-5.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class Mammal
{
public:
	Mammal(){}
	~Mammal(){}
	virtual void speak() const {
		cout << "Mammal speak" << endl;
	}
};

class Dog: public Mammal
{
public:
	Dog(){}
	~Dog(){}
	void speak() const {
		cout << "Bark" << endl;
	}
};

int main()
{
	Dog d;
	d.speak();
	return 0;
}