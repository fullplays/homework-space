// 6-26.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

void zhuanzhi(int m,int n) {
	cout << "The original matrix is:" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << 10 * (i + 1) + j + 1 << " ";
		}
		cout << endl;
	}
	cout << "The transformation matrix is :" << endl;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			cout << 10 * (i + 1) + j + 1 << " ";
		}
		cout << endl;
	}
}

int main() {
	int m, n;
	cout << "Please create a matrix:" << endl;
	cout << "Please enter the number of rows:";
	cin >> m;
	cout << "Please enter the number of lines:";
	cin >> n;
	zhuanzhi(m, n);
}
	


