#include <iostream.h>
class BaseClass
{
public:
BaseClass();
};
BaseClass::BaseClass()
{
cout << "����������!" << endl;
}
class DerivedClass : public BaseClass
{
public:
DerivedClass(); 
};
DerivedClass::DerivedClass()
{
cout << "�������������!" << endl;
}
void main()
{
DerivedClass d;
}