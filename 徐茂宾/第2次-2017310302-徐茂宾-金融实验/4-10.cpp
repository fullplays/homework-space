// 4-10-人事管理（2017310302-徐茂宾-金融实验班17）

#include "pch.h"
#include <iostream>
using namespace std;

class date {
public:
	date(int x = 0, int y = 0, int z = 0) {
		year = x;
		month = y;
		day = z;
	}
	date(date & d);
	void setdate();
	void showdate();
private:
	int year, month, day;
};

date::date(date & d) {
	year = d.year;
	month = d.month;
	day = d.day;
}

void date::setdate() {
	int a, b, c;
	cout << "输入出生日期："<<endl;
	cin >> a>>b >>c; 
	year = a; 
	month = b; 
	day = c;
}

void date::showdate() {
	cout << year << "年"<<month<<"月"<< day<<"日"  << endl;
}

class human {
public:
	human(date bd, long int nb, long int id, char sx);
	human(human & h);
	void sethuman();
	void showhuman();
private:
	int number, idnumber;
	char sex; 
	date birthday;
};

human::human(date bd, long int nb = 0, long int id = 0, char sx = 'm') :birthday(bd) {
	birthday = bd;
	number = nb;
	idnumber = id;
	sex = sx;
}

human::human(human & h) :birthday(h.birthday) {
	number = h.number;
	birthday = h.birthday;
	sex = h.sex;
	idnumber = h.idnumber;
}

void human::sethuman() {
	date a;long int b, c;char d; 
	a.setdate();
	cout << "编号:"; cin >> b; 
	cout << "性别:"; cin >> d;
	cout << "身份证号:"; cin >> c; 
	cout << endl; 
	birthday = a; number = b; idnumber = c; sex = d;
}

void human::showhuman() {
	cout << "编号：" << number << endl;
	cout << "性别：" << sex << endl;
	cout << "出生日期：";
	birthday.showdate();
	cout << "身份证号：" << number << endl;
}

int main() {
	date b;
	human h1(b);
	h1.sethuman();
	human h2(h1);
	h1.showhuman();
	return 0;
}