#include <iostream>
using namespace std;

class base{
public:
	base();

};

base::base() {
	cout << "���ڵ����˻��๹�캯����" << endl;
}
class derived :public base {
public:
	derived(){}
};

derived::derived() {
	cout << "���ڵ�����������Ĺ��캯��" << endl;

}

int main() {
	derived d;
	return 0;
}