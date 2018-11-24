// 8-5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Mammal {
public:
	virtual void speak() {
		cout << "Mammal" << endl;
	}
};

class Dog :public Mammal {
	public:
		void speak() {
			cout << "Dog" << endl;
		}
};
int main() {
	Dog dog;
	dog.speak();
	return 0;
}

