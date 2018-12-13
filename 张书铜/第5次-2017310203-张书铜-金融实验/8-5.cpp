// ConsoleApplication21.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
class Mammal {
public:
	Mammal() {
		cout << "Mammal constructor...\n";

	}
	virtual ~Mammal() {
		cout << "Mammal destructor...\n";
	}
	virtual void speak()const {
		cout << "Mammal speak!\n";
	}
};
class dog :public Mammal {
public:
	dog() {
		cout << "dog constructor...\n";
	}
	~dog() {
		cout << "dog destructor...\n";
	}
	void speak()const {
		cout << "woof!\n";
	}
};
int main() {
	Mammal*pdog = new dog;
	pdog->speak();
	delete pdog;
	return 0;
}