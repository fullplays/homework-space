#include<iostream>
#include<string>
using namespace std;


int main() {
	string s1;
	cout << "����һ��Ӣ�ľ��ӣ�" << endl;
	getline(cin, s1);
	int num = 0;
	for (int i = 0; s1[i]; i++) {
		if ((s1[i] >= 'a'&&s1[i] <= 'z') || (s1[i] >= 'A'&&s1[i] <= 'Z'))
			num++;
	}
	cout << "���������" << num << "����ĸ" << endl;
	return 0;
	system("pause");

}