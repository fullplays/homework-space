#include "pch.h"
#include <iostream>
#include<vector>
using namespace std;

double average(const vector<double>&arr) {
	double sum = 0;
	for (unsigned i = 0; i < 8; i++)
		sum += arr[i];
	return sum / 8;
}
int main() {
	unsigned n=8;
	vector<double>arr(n);
	cout << "请输入8名学生的成绩：";
	for (unsigned i=0;i<8;i++)
	cin >> arr[i];
	cout << "Average=" << average(arr) << endl;
	return 0;
}