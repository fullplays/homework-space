// 7-7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Base0 {
public:
	Base0(int i) {
		cout << "这是Base0的构造函数o(*￣▽￣*)ブ" << endl;
	}
};

class Base1:public Base0 {
public:
	Base1(int a, int b) :Base0(b), base0(a) {
		cout << "这是Base1的构造函数啦啦啦╮(╯▽╰)╭" << endl;
	}
private:
	Base0 base0;
};

int main() {
	Base1(1, 2);
	return 0;
}