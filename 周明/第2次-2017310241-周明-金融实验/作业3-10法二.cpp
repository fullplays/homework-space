// 作业3-10最大公约数1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
 
int zdgys(int x, int y) {
	while(x!=y)
	{if (x > y)x = x - y; else if (x < y)y = y - x;
	}; return x;
}
int zxgbs(int x, int y) {
	int a = zdgys(x, y);
	int b = x / a;
	int c = y / a;
	return a * b*c;
}
	int main() {
		int x; int y;
		cout << "请输入您要判断的两个数字：";
		cin >> x ;
		cin >> y ;
		cout << x << "与" << y << "的最大公因数是" << zdgys(x, y);
		cout << x << "与" << y << "的最小公倍数是" << zxgbs(x, y);
	}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
