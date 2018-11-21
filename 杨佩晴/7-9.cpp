// 7-9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Base {
public:
	Base(){
		cout << "我是基类Base的构造函数o(*￣▽￣*)ブ"<< endl;
	}
	void fn1() {
		cout<<"调用了Base类的fn1函数呀o(*￣▽￣*)ブ"<< endl;
	}
	void fn2() { 
		cout<<"调用了Base类的fn2函数呀o(*￣▽￣*)ブ"<<endl;
	}
};

class Derived: private Base {
public:
	Derived() {
		cout << "我是派生类Derived的构造函数o(*￣▽￣*)ブ" << endl;
	}
	void fn11() { return fn1(); }
	void fn22() { return fn2(); }

};

int main() {
	Derived d;
	d.fn11();
	d.fn22();
	return 0;
}