#include<iostream>
using namespace std;

int fib(int n);

int main() {
	int n;
	cout << "������һ����������";
	cin >> n;
	cout << "\n";
	int result = fib(n);
	cout << result << "�Ǽ����ݹ���õĽ����" << endl;
	return 0;
}

int fib(int n) {
	cout << n << "�ļ������ڱ�����...";
	if (n < 3) {
		cout << "���� 1!\n";
		return (1)��
	}
	else {
		cout << "����" << n - 1 << "�ļ�����" << n - 2 << "�ļ���\n";
		return (fib(n - 1) + fib(n - 2));
	}

}