#include <iostream> //preprocessor directives
#include <math.h>
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
bool fun1(int x){
int m = 0 ;
for(int i = 2 ; i < x ; i++){
    if (x % i == 0)
        m++ ;
}
return (m == 0) ;
}
int main(){
int a ;
cout << "������һ������1������" << endl ;
cin >> a ;
if (fun1(a))
    cout << a << "Ϊ����" << endl ;
    else cout << a << "Ϊ����" << endl ;
    return 0 ;
}
