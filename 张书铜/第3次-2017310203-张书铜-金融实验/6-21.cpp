#include <iostream>
#include <cstdio>
using namespace std;

int count (char*str)
{
	int i, s = 0;
	for (i = 0;str[i];i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z'))
			s++;
	}
	return s;
}

int main() 
{
	char text[100];
	cout << "������һ��Ӣ�ľ���" << endl;
	gets(text);
	cout << "������������ĸ��Ϊ" << count(text) << endl;
}