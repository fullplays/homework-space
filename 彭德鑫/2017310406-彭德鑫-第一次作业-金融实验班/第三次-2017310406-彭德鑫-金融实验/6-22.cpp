#include<iostream>
using namespace std;
void reverse(string &s)
{
    static string s2;
    int Size1=s.length(),Size2=s2.length();
    if(Size1==Size2)
    {
        s=s2;
        return;
    }
    s2+=s.at(Size1-Size2-1);
    reverse(s);
}
int main()
{
	string s;
	cout<<"������һ���ַ�"<<endl;
	cin>>s;
    reverse(s);
    cout<<"��ô�⴮�ַ��ĵ����� "<<s;
    return 0;
}

