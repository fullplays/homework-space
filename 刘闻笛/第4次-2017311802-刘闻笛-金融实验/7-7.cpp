// 7-7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class base0 {
public:base0();
};
base0::base0()
{
	cout << "����������" << endl;
}
class derived :public base0 {
public:derived();

};
derived::derived() {
	cout << "�������������" << endl;
}
int main()
{
	derived d;
    return 0;
}

