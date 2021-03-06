#include "pch.h"
#include <iostream>
using namespace std;

class Mammal{
public:
	Mammal() {
		cout << "Mammal constructor..." << endl;
	}
	virtual ~Mammal() {
		cout << "Mammal destructor..." << endl;
	}
	virtual void speak() {
		cout << "Mammal speak..." << endl;
	}
};
class Dog:public Mammal {
public:
	Dog() {
		cout << "Dog constructor..." << endl;
	}
	virtual ~Dog() {
		cout << "Dog destructor..." << endl;
	}
	void speak()const {
		cout << "Dog speak..." << endl;
	}
};
int main() {
	Mammal *p = new Dog;
	p->speak();
	delete p;
	return 0;
}