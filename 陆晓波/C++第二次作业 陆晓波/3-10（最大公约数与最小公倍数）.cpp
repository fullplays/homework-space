#include <iostream> //preprocessor directives
#include <math.h>
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
int max1(int x , int y){
for (int i = min(x , y) ; i > 0 ; i--){
    if (x % i == 0 && y % i == 0)
    return i ;
}
}
int min1(int x , int y){
for (int i = max(x , y) ; i > 0 ; i++)
    if (i % x == 0 && i % y == 0)
        return i ;
}
int main(){
int x , y ;
cout << "��������������" << endl ;
cin >> x >> y ;
cout << "���Լ��Ϊ" << max1(x, y) << endl ;;
cout << "��С������Ϊ" << min1(x ,y) << endl ;
return 0 ;}
