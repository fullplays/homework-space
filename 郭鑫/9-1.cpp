#include "pch.h"
#include <iostream>
#include<iomanip>
#include"array.h"
using namespace std;

int main() {
	int n;
	double average = 0;
	double total = 0;
	cout << "请输入学生的人数：" << endl;
	cin >> n;
	array<float>score(n);
	for (int i = 0; i < n; i++) {
		cout << "请输入学生的成绩：" << endl;
		cin >> score[i];
		total += score[i];
	}
	average = total / n;
	cout << "平均成绩为：" << average << endl;
	return 0;
}