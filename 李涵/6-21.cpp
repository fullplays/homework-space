// ConsoleApplication8.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int count(char *str)
{
	int i, num = 0;
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z' || str[i] >= 'A'&&str[i] <= 'Z'))
			num++;
	}
	return num;
}
int main()
{
	char text[299];
	cout << "Input:" << endl;
	count(text);
	cout << "This sentence has " << count(text) << "characters." << endl;
}