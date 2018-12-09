// ConsoleApplication23.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
class BaseClass {
public:
	virtual~BaseClass() {

		cout << "~BaseClass()" << endl;
	}
};
class DerivedClass :public BaseClass {
public:
	~DerivedClass() {
		cout << "~DerivedClass()" << endl;
	}
};
int main() {
	BaseClass*bp = new DerivedClass;
	delete bp;
	return 0;
}