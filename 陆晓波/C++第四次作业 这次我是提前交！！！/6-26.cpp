#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
int main(){
    int i , j ;
    cout << "����������������" << endl ;
    cin >> i ;
    cout << "����������������" << endl ;
    cin >> j ;
int a[i][j] ;
cout << "��������������ֵ" << endl ;
for(int m = 0 ; m < i ; m++)
    for(int n = 0 ; n < j ; n++)
        cin >> a[m][n] ;
int b[j][i] ;
for(int ii = 0 ; ii < i ; ii++)
    for(int jj = 0 ; jj < j ; jj++)
       b[jj][ii] = a[ii][jj] ;
cout << "��������ת��Ϊ��" << endl ;
for(int ii = 0 ; ii < j ; ii++){
for(int jj = 0 ; jj < i ; jj++)
cout << b[ii][jj] << " " ;
cout << endl ;}
return 0 ;

}
