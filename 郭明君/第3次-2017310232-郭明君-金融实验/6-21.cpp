// 6-21.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int count(string str)
{
	int i, num = 0;
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z'))
			num++;
	}
	return num;
}

void main()
{
	string text;
	cout << "����һ��Ӣ�����:" << endl;
	getline(cin, text);
	cout << "�����������" << count(text) << "����ĸ" << endl;
	return;
}
