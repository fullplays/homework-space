#include<iostream>
#include<string>
using namespace std;

int count(string str)
{
	int i, num = 0;
	for (i = 0; str[i] != '.'; i++)
	{
		if ((str[i] >= 'a'&&str[i] <= 'z' || str[i] >= 'A'&&str[i] <= 'Z'))
			num++;
	}
	return num;
}
int main()
{
	string sest;

	cout << "������һ��Ӣ�ľ���" << endl;
	getline(cin, sest, '.');
	
	
	int i = sest.length();
	cout << "�����������" << i << "��Ӣ����ĸ" << endl;
	return 0;

}