#include <iostream>
using namespace std;

class Base {
public:
	Base();
};

Base::Base() {
	cout << "�����������" << endl;
}

class Derived :public Base {
public:
	Derived();
};

Derived::Derived() {
	cout << "���������������" << endl;
}

int main() {
	Derived d;
	return 0;
}