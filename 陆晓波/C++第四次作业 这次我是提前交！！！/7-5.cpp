#include <iostream> //preprocessor directives
#include "Rectangle.h"
using namespace std ;
//using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
class Base{
public:
Base(){cout << "constructing member of Base" << endl ;}
~Base(){cout << "destructing member of Base" << endl ;}
};
class Derived{
public:
Derived(){cout << "constructing member of Derived" << endl ;}
~Base(){cout << "destructing member of Base" << endl ;}
};
int main(){
    Derived d ;
    return 0 ;
}
