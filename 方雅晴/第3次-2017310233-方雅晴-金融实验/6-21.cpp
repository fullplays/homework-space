#include<iostream>
#include<string>
using namespace std;
int f(string sentence)
{   
   int n=0;
   int len=sentence.length();
   for(int p=0;p<len;p++)
	{
	 if((sentence[p]>='A'&&sentence[p]<='Z')||(sentence[p]>='a'&&sentence[p]<='z'))
	 n++;
    }
    return n;
}

int main(){
	string sentence;
	cout<<"������һ��Ӣ�ģ�"<<endl;
	 getline(cin,sentence);
	 cout<<"�þ���"<<f(sentence)<<"����ĸ��"<<endl;
	 return 0;
	 }
