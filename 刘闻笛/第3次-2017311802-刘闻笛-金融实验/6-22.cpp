// 6-22.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
void reverse(char*s, char*t) {
	char c;
	if (s < t) {
		c = *s;
		*s = *t;
		*t = c;
		reverse(s+=1,t-=1);

	}
}
void reverse(char*s) {
	reverse(s, s + strlen(s) - 1);
}
void main()
{
	char strl[20];
	cout << "����һ���ַ���" << endl;
	cin >> strl;
	cout << "ԭ�ַ���Ϊ��" << strl << endl;
	reverse(strl);
	cout << "����ת��Ϊ��" << strl << endl;
}

