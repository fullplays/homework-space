// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#define n 8
float grade[n];
int main() {
	int i;
	float total, average;
	for (i = 0; i <= n; i++);
	{
		cout << "Enter grade:" << i;
		cin >> grade[i];
	}
	total = 0;
	for (i = 0; i < n; i++);
	total = total + grade[i];
	average = total / n;
	cout << "Average grade is " << average << endl;
	return 0;
}

