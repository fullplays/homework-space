#include<iostream>
#include<string>
using namespace std;

int main() {
	double grade[8];
	double sum=0;
	cout << "������8���˵Ŀ��Գɼ�" << endl;
	for (int i = 0; i < 8; i++) {
		cin >> grade[i];
	}
	for (int i = 0; i < 8; i++) {
		sum += grade[i];
	}
	cout <<"���ǵ�ƽ���ɼ�Ϊ��"<< sum / 8 << endl;
	system("pause");
	return 0;
}