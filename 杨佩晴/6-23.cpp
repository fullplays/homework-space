// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

float average(int a[8]) {
	float s = 0;
	float ave;
	for (int i = 0; i < 8; i++) {
		s += a[i];
	}
	ave = s / 8;
	return ave;
}

int main() {
	cout << "Please enter 8 scores,and we will show you the average:";
	int a[8];
	for (int i = 0; i < 8; i++) {
		cin >> a[i];
	}
	average(a);
	cout << "The average is :"<< average(a);
	return 0;
}



