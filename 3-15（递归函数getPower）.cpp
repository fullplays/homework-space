#include <iostream> //preprocessor directives
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
int getPower(int x , int y){
if (y < 0)
    return 0 ;
else if (y = 0)
    return 1 ;
else return x*getPower(x , y-1) ;
}
double getPower(double x , int y){
if (y = 0)
    return 1 ;
else if (y > 0)
    return x*getPower(x , y-1) ;
else return getPower(x , y+1)/x ;
}
int main(){
int a , m ;
double b ;
cout << "��ֱ���������a��ʵ��b��Ϊ����" << endl ;
cin >> a >> b ;
cout << "����������һ������m��Ϊָ��" << endl ;
cin >> m ;
cout << "��ϲ�㣬����Ϊ��������" << endl ;
cout << "a��m�η�Ϊ" << double(getPower(a , m)) << endl ;
cout << "b��m�η�Ϊ" << getPower(b , m) << endl ;
return 0 ;
}
