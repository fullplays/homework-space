#include <iostream>
#include <cmath>
using namespace std;

bool prime(int i) {
	bool isPrime == true;
	for (int j = 2; j <= sqrt(i); j++) {
		if (i % j == 0) {
			isPrime == false;
			break;
		}
	}
	return isPrime;
}

int main() {
	int i;
	cout << "������һ��������";
	cin >> i;
	if (prime(i))
		cout << i << "������" << endl;
	else
		cout << i << "��������" << endl;
	return 0;
}