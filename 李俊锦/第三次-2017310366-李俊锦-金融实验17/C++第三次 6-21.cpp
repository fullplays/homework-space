#include<iostream>
#include<cstdio>
using namespace std;
int countletter(const char *a){
    int count=0;
    for(int i=0;a[i];i++){
        if(a[i]<='z' && a[i]>='a'||a[i]<='Z' && a[i]>='A')
            count++;
    }
    return count;
}
int main()
{
    char sentense[100];
    cout<<"������һ��Ӣ�ľ��ӣ�"<<endl;
    gets(sentense);
    cout<<"�����������"<<countletter(sentense)<<"����ĸ��";
}
