#include <iostream>
#include <stdio.h>
using namespace std;
int count(char *str){
	int i,num=0;
	for (i=0;(str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'); i++)
	{
		num++;
	}
	return num;
}
int main(){
	char text[100];
	cout<<"����һ��Ӣ�����"<<endl;
	gets(text);
	cout<<"�����������"<<count(text)<<"����ĸ��"<<endl;
}
