// ConsoleApplication12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
#include<string>
using namespace std;

#define N 8
float grade[N];

int main()
{
	int i;
	float s, avg;
	for (i = 1;i < N;i++)
	{
		cout << "请输入考试成绩";
		cin >> grade[i];
	}
	s = 0;
	for (i = 0;i < N;i++)
		s += grade[i];
	avg = s / N;
	cout << "平均成绩为" << avg << endl;
	return 0;
}