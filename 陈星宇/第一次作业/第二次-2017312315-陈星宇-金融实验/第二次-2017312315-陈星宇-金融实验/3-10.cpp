#include <iostream>
#include <cmath>
using namespace std;

int mcd(int i, int j) {
	if (i < j) {
		int trans = i;
		i = j;
		j = trans;
	}
	int result = 1;
	for (int k = 2; k <= j; k++)
		if (i%k == 0 && j%k == 0)
			result = k;
	return result;
}

int main() {
	int i, j, x, y;
	cout << "������һ����������";
	cin >> i;
	cout << "��������һ����������";
	cin >> j;

	x = mcd(i, j);
	y = i * j / x;
	cout << i << "��" << j << "�����Լ���ǣ�" << x << endl;
	cout << i << "��" << j << "����С�������ǣ�" << y << endl;
	return0;
}