#include <iostream>
using namespace std;

class Base0 {
public:
	Base0(){
		cout << "���û��๹�캯��" << endl;
	}
};
class Base1 :public Base0{
public:
	Base1() {
		cout << "���������๹�캯��" << endl;
	}
};
int main(){
	Base1 A;
	system("pause");
	return 0;
}