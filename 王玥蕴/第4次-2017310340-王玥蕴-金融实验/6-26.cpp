#include<iostream>
using namespace std;
void move(int*a, int n)
{
	int  k,i,j=0;
	for (i= 0; j < n; j++) {
		k = *(a + i*n + j);
		*(a + i*n + j) = *(a + j*n + i);
		*(a + j*n + i) = k;
	}
}
int main() {
	int i, n, j;
	int*p;
	cout << "�����������С�����Ŀ��";
		cin >> n;
	p = new int[n*n];
	cout << "��������Ԫ��" << endl;
	for (i = 0; i<n; i++)
		for (j = 0; j<n; j++) {
			cout << "��" << i + 1 << "�е�" << j + 1 << "��Ԫ��Ϊ��";
			cin >> p[i*n + j];
		}
	cout << "����ľ���Ϊ��" << endl;
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++)
			cout << p[i*n + j] << " ";
		cout << endl;
	}
	return 0;
}
