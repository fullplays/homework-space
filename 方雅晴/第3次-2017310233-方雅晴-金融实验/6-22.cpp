#include<iostream>
#include<string>
using namespace std;

string reverse(string&s){
	if(s.length()>1)
{	string sub=s.substr(1,s.length()-2);
	return s.substr(s.length()-1,1)+reverse(sub)+s.substr(0,1);
}
else return s;
}
int main(){
	cout<<"������һ���ַ���"<<endl;
	string s;
	cin>>s;
	cout<<"��תΪ��"<<reverse(s);
	return 0;	 
}
