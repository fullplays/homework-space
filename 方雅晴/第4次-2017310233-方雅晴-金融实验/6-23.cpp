#include<iostream>
using namespace std;
 int main(){
    const int N=8;
	 int n;
	 float score[N],sum=0;
	 for(n=0;n<N;n++)
	 	{cout<<"�������"<<n+1<<"��ѧ���ĳɼ���"<<endl;
		 cin>>score[n];}
	 for(n=0;n<N;n++)
	 sum+=score[n];
	 cout<<sum/N<<endl;
 	return 0;
 }
