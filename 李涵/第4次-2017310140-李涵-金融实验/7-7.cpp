// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class base {
public: 
	base();
};
base::base(){
	cout << "����������" << endl;
};
class derived:public base{
public:
	derived();
};
derived::derived() {
	cout << "�������������" << endl;
}
int main() {
	derived a;
	return 0;
}