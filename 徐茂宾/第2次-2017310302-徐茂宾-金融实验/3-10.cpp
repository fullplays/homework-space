// 3-10-最大公约数（2017310302-徐茂宾-金融实验班17）
//

#include "pch.h"
#include <iostream>
using namespace std;

int bei(int a, int b) {
	int c;
	if (a == 1)
		return b;
	else if (b == 1)
		return a;
	else
	    c = a;
		for (a;a < b*c;a++)
			if (a%c == 0 && a%b==0){
				return a;
				break;
                }
	        return 0;
}

int yue(int m, int n) {
	int p;
	if (m >= n) {
		p = m;
	}
	else
		p = n;
	for (p;p >= 1;) {
		if (n%p == 0 && m%p == 0) {
			return p;
			break;
		}
		p=p-1;
	}
	return p;
}

int main() {
	int x, y,w,z;
	cout << "请输入两个正整数：" << endl;
	cin >> x>>y;
	w=bei(x, y);
	cout << x << "和" << y << "最小公倍数为：" <<w<<endl;
	z=yue(x, y);
	cout<< x << "和" << y << "最大公约数为：" << z<< endl;
}