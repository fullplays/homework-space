// 6-26����ת��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void transposition (int m, int n){
	int a[100][100];
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << "�������" << i + 1 << "��" << "��" << j + 1 << "��Ԫ��" << endl;
			cin >> a[i][j];
		}
	}
	cout << "ԭ����Ϊ��" << endl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "ת�ú�ľ���Ϊ��" << endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[j][i] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	int m, n;
	cout << "����������������" << endl;
	cin >> m;
	cout << "����������������" << endl;
	cin >> n;
	transposition(m, n);
	return 0;
}

