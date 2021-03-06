// 6-26.cpp
#include "pch.h"
#include <iostream>
using namespace std;

void transpose(int * p, int n) {
	int a;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			a = p[i*n + j];
			p[i*n + j] = p[j*n + i];
			p[j*n + i] = a;
		}
	}
}

int main()
{
	int n;
	cout << "请输入矩阵的行、列数：" ;
	cin >> n;
	int * p = new int[n*n];
	cout << "请输入矩阵元素：" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "行元素为：";
		for (int j = 0; j < n; j++)
		{
			cin >> p[i*n + j];
		}
	}
	cout << "输入的矩阵为：" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i*n + j] << "";
		}
		cout << endl;
	}
	transpose(p, n);
	cout << "转置矩阵为：" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i*n + j] << "";
		}
		cout << endl;
	}
	return 0;
}

