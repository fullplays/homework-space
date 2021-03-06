#include "pch.h"
#include <iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, int y);

int main() {
	int number1, power;
	double number2;
	int answer1;
	double answer2;
	cout << "Enter an int: ";
	cin >> number1;
	cout << "Enter a double: ";
	cin >> number2;
	cout << "Enter the power: ";
	cin >> power;
	answer1 = getPower((int)number1, power);
	answer2 = getPower((double)number2, power);
	cout << number1 << "to the power " << power << "is " << number1 << endl;
	return 0;
}
int getPower(int x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 0;
	else
		return (x*getPower(x - 1, y));
}
double getPower(double x, int y) {
	if (y == 1)
		return x;
	else if (y == 0)
		return 1;
	else if (y < 0)
		return 1 / getPower((double)x, -y);
	else
		return (x*getPower((double)x - 1, y));
}