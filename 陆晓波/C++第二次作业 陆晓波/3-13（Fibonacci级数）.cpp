#include <iostream> //preprocessor directives
#include <math.h>
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
int Fibonacci(int x){
if (x <= 2)
return 1 ;
else return Fibonacci(x-1) + Fibonacci(x-2) ;
}
int main(){
int n ;
cout << "����������" << endl ;
cin >> n ;
cout << "��" << n << "���Fibonacci������ֵΪ" << Fibonacci(n) << endl ;
return 0 ;
}
