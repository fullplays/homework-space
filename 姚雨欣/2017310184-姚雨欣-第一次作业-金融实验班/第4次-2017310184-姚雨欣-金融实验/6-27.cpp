#include <iostream>
using namespace std;

void move(int *m, int n) {
	int i, j, k;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; i++) {
			k = *(m + i*n + j);
			*(m + i*n + j) = *(m + j*n + i);
			*(m + j*n + i) = k;
		}
	}
}

int main() {
	int n, i, j;
	int *p;
	cout << "�����������" << endl;
	cin >> n;
	p = new int[n*n];
	cout << "������������" << endl;
	for (i=0;i<n;i++)
		for (j = 0; j < n; j++) {
			cout << "��" << i + 1 << "�е�" << j + 1 << "����";
			cin >> p[i*n + j];

		}
		cout << "����Ϊ" << endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++){
				{
				cout << p[i*n + j] << endl;
			}
				cout << endl;
			}
		}
		move(p, n);
		cout << "ת�ú���" << endl;
		for (int i = 0; i < n; i++);
		{
			for (j = 0; j < n; j++)
				cout << p[i*n + j] << endl;
			cout << endl;

		}


		return 0;
		system("pause");
}