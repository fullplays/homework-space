#include <iostream> //preprocessor directives
#include <vector>
using namespace std ;
//using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
double average(vector<double> &arr){
double sum = 0 ;
for(int i = 0 ; i < arr.size() ; i++)
    sum += arr[i] ;
    return sum/arr.size() ;
}
int main(){
int n = 8 ;
vector <double> arr ;
cout << "��ֱ�����8��ѧ���Ŀ��Գɼ����ҽ�Ϊ������ƽ����" << endl ;
for(int i = 0 ; i < n ; i++)
    cin >> arr[i] ;
cout << "�õģ����ǵ�ƽ�����ǣ�" << average(arr) << endl ;
}
