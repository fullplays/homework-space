#include<iostream>
using namespace std;
void change(int **p,int n){
	int i,j,k;
	for(i=0;i<n;i++)
	for(j=0;j<i;j++)
	{k=*(*(p+i)+j);
	*(*(p+i)+j)=*(*(p+j)+i);
	*(*(p+j)+i)=k;
}
} 

int main(){
	int n,i,j;
	cout<<"������������������"<<endl;
	cin>>n;
	int **matrix=new int*[n];
	for(int a=0;a<n; a++)   
    matrix[a]=new  int[n]; 
	cout<<"���������"<<endl;
	for(i=0;i<n;i++)
	{
	cout<<"�������"<<i+1<<"��"<<endl;
		   for(j=0;j<n;j++)
		 {  cout<<"�������"<<j+1<<"��"<<endl; 
	      cin>>matrix[i][j];
	  }}
	  cout<<"����Ϊ��"<<endl; 
	  for(i=0;i<n;i++)
	   {
	   for(j=0;j<n;j++)
	      cout<<matrix[i][j];
	      cout<<endl;
	  }
	change(matrix,n);
    cout<<"ת�þ���Ϊ��"<<endl; 
	for(i=0;i<n;i++)
	   {
	   for(j=0;j<n;j++)
	      cout<<matrix[i][j];
	      cout<<endl;
	  }
	     for(int  m=0;m<n;m++)  
          delete[]   matrix[m];  
          delete[]   matrix;  

		  return 0;
}
