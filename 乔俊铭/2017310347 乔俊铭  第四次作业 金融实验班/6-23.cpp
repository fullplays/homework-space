#include<iostream>
using namespace std;

int main() {
	float grade[8];
	for (int i = 0; i < 8; i++) {
		cout << "�������"<<i+1<<"��ͬѧ�ĳɼ�" << endl;
		cin >> grade[i] ;
	};
	float average;
	float sum=0;
	for (int m = 0; m < 8; m++)
	{
		sum += grade[m];
	};
	average = sum / 8;
	cout << "ƽ���ɼ�Ϊ" << average;
	system("pause");

}