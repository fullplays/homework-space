#include<iostream>
#include<string>
using namespace std;
class Date {
	int year;
	int month;
	int day;
public:
	Data() {}
	Data(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	void set() {
		cin >> year >> month >> day;
	}
	void display() {
		cout << year << "��" << month << "��" << day << "��";
	}
};

class Person {
	int num;
	char sex;
	Data birthday;
	char ID[18];
public:
	Person() {}
	Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d) {}
	Person(Person&p) {}
	void input() {}
	void output() {}
	~Person() {
		cout << " " < num << "����Ա��¼�����" << endl;
	}
};

Person::Person(int n, int y, int m, int d, char id[18], char s = 'm') :birthday(y, m, d) {
	num = n;
	sex = s;
	strcpy(ID, id);
}

Person::Person(Person&p) {
	num = p.num;
	sex = p.sex;
	birthday = p.birthday;
	strcpy(ID, P.ID);
}

Person::void input() {
	cout << "�������ݣ�" << endl;
	cout << "��ţ�";
	cin >> num;
	cout << "�Ա�m/f):";
	cin >> sex;
	cout << "�������ڣ�";
	birthday.set();
	cout << "���֤�ţ�";
	cin >> ID;
	ID[18] = '\0';
	cout << endl;
}

Person::void output() {
	cout << "��ţ�" << num << endl;
	cout << "�Ա�" << sex << endl;
	cout << "���գ�";
	birthday.display();
	cout << endl;
	cout << "���֤�ţ�" << ID << endl;
}

int main() {
	Person p1;
	p1.input();
	p1.output();
	return 0;
}