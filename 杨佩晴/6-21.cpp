// 6-21.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

void calculate(string sentence) {
	cout << "The length of the sentence is:" << sentence.length()-1;
}

int main() {
	string sentence;
	cout << "Please enter a sentence,and we will help you calculate it:" << endl;
	getline(cin, sentence, '.');
	calculate(sentence);
	return 0;
}

