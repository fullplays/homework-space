#include "pch.h"
#include <iostream>
using namespace std;

int Fn(int n) {
	if (n ==1||n==2)
		return 1;
	else
		return Fn(n - 1) + Fn(n - 2);
}

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << Fn(n)<< endl;
	return 0;
}