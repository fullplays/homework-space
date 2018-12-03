// 3-15-重载函数（2017310302-徐茂宾-金融实验班17）

#include "pch.h"
#include <iostream>
using namespace std;

//整形形式，当y<0时，返回0
int getPower(int x, int y) {
	int k,z;
	k = x;
	if (y == 0)
		return 1;
	else if (y < 0)
		return 0;
	else
		for (z = 1;z < y;z++)
			x = x * k;
	    return x;
}
//实型形式
double getPower(double x, int y) {
	double k;
	int z;
	k = x;
	if (y == 0)
		return 1;
	else
		for (z = 1;z < y;z++)
			x = x * k;
		return x;
}
int main(){
	int a,m, r;
	double b, t;
	cout << "请输入一个整数：" << endl;
	cin >> a;
	cout << "请输入一个实数：" << endl;
	cin >> b;
	cout << "请输入一个整数作为指数：" << endl;
	cin >> m;
	r = getPower(a, m);
	t = getPower(b, m);
	cout << a << "的" << m << "次方=" << r << endl;
	cout << b << "的" << m << "次方=" << t << endl;
	return 0;
}
