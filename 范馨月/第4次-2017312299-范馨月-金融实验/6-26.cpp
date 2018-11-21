#include<iostream>

using namespace std;

void output(double *ptr,int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ptr[i*n + j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cout << "�����������С�������  ";
	cin >> n;
	double *matrix = new double[n*n];
	 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "��" << i+1 << "�е�" << j+1 << "�е�����Ϊ�� ";
			cin >> matrix[i*n + j];
		}
	}

	cout << "�������ԭ����Ϊ��" << endl;
	output(matrix, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			double a = matrix[i*n + j];
			matrix[i*n + j] = matrix[j*n + i];
			matrix[j*n + i] = a;
		}
	}

	cout << "ת��֮��ľ���Ϊ�� " << endl;
	output(matrix, n);
    
	delete[] matrix;
	system("pause");
	return 0;
}