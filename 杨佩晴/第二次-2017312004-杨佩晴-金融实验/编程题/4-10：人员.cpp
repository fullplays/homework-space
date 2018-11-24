// 4-10：人员.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

class Date {
public:
	Date(int myyear=1999, int mymonth=6, int myday=24) {
		year = myyear;
		month = mymonth;
		day = myday;
	}
	Date(Date &d);
	int getyear() { return year; }
	int getmonth() { return month; }
	int getday() { return day; }
private:
	int year, month, day;
};

Date::Date(Date & d)
{
	year = d.year;
	month = d.month;
	day = d.day;
}

struct Stuff {
	int num;
	char sex;
	Date date;
	int ID;
public:
	void set(int mynum=3,char mysex='f',int myID=2017312004);
	void show();
	~Stuff(){}
};

void Stuff::set(int mynum, char mysex, int myID) {
	num = mynum;
	sex = mysex;
	ID = myID;
}

void Stuff::show() {
	cout << "number:" << num << endl;
	cout << "sex:" << sex << endl;
	cout << "ID number:" << ID << endl;
	cout << "birthday" << date.getyear() << "." << date.getmonth()<< "." << date.getday()<<"." << endl;
}

int main() {
	Date b(1999, 8, 28);
	Stuff stu = { 5, 'm', b, 2017312004 };
	stu.show();
}


