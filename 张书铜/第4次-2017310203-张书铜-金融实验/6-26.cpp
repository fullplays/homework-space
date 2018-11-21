// ConsoleApplication13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
void move(int*matrix, int n)
{
	int i, j,a;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			a = *(matrix + i * n + j);
			*(matrix + i * n + j) = *(matrix + j * n + i);
			*(matrix + j * n + i) = a;
		}
}
int main()
{
	int n, i, j;
	int*p;
	cout << "请输入矩阵的行数（列数）";
	cin >> n;
	p = new int[n*n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cout << "请输入第" << i + 1 << "行第" << j + 1 << "列的元素";
			cin >> p[i*n + j];
		}
	move(p, n);
	cout << "矩阵的转置为" << endl;
	for(i=0;i<n;i++)
	{
		for (j = 0;j < n;j++)
			cout << p[i*n + j] << " ";
		cout << endl;
	}
	return 0;
}

