#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "请输入一个十进制的整数：" << endl;
	cin >> n;
	cout << "十进制形式为：" << dec << n << endl;
	cout << "八进制形式为：" << oct << n << endl;
	cout << "十六进制形式为：" << hex << n << endl;
	return 0;
}