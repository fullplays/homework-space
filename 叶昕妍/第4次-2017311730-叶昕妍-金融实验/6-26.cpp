#include <iostream>
using namespace std;

int main() {
	int n,i, j;
	int *p;
	cout << "����������������������" << endl;
	cin >> n;
	p = new int[n*n];
	cout << "����������Ԫ�أ�" << endl;
	for (i = 0; i <= n - 1; i++) 
		for (j = 0; j <= n - 1; j++) {
			cout << "��" << i + 1 << "�е�" << j + 1 << "��Ԫ���ǣ�";
		cin >> p[i*n+j];
			}
	cout << "����Ϊ:" << endl;
	for (i = 0; i <= n - 1; i++) {
		for (j = 0; j <= n - 1; j++)
			cout << p[i*n + j] <<" ";
		cout << endl;}

	int m;
	for (i = 0; i <= n - 1; i++) 
		for (j = 0; j <= n - 1; j++) {
			m = p[i*n + j];
			p[i*n + j] = p[j*n + i];
			p[j*n + i] = m;
		}
	cout << "ת�þ���Ϊ��" << endl;
	for (i = 0; i <= n - 1; i++) {
		for (j = 0; j <= n - 1; j++)
			cout << p[j*n + i] << " ";
		cout << endl;
	}
	delete[]p;
	system("pause");
	return 0;
}