#include <iostream> //preprocessor directives
#include <string>
#include <typeinfo>
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
class DataType{
public:
    DataType(char a) ;
    DataType(int b) ;
    DataType(float c) ;
    };
union unknown{
    char d ;
    int e ;
    float f ;};
    DataType::DataType(char a){
    cout << "����һ���ַ�" << endl ;}
    DataType::DataType(int b){
    cout << "����һ������" << endl ;}
    DataType::DataType(float c){
    cout << "����һ��������" << endl;}
    int main(){
    string x ;
    unknown x0 ;
    cout << "������һ�������ҿ��Ը���������ʲô���͵�Ŷ����" << endl ;
    cin >> x ;
    x0 = static_cast<unknown>(x) ;
    DataType(x0) ;
    return 0 ;
    }
