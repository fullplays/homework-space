#include <iostream>
using namespace std;
 

const int n = 8;

float avg(int *&);
int main() {
	int *student = new int[n];
	int i;
	for (i = 0; i < n; i++) {
		cout << "����8���ɼ�" << endl;
		cin >> *(student + i);

	}
	cout << "ƽ����" << avg(student) << endl;
	delete[] student;
	system("pause");

}

float avg(int *& st) {
	int i;
	float avg = 0;
	for (i = 0; i < n; i++) {
		avg += *(st+i);
	}
	return avg / n;

}