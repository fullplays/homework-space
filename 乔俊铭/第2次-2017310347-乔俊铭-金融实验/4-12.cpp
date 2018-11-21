#include<iostream>
using namespace std;
class DataType {
private:
	enum {
		character,
		integer,
		floatingpoint
	} varytype;
	union {
		int i;
		double f;
		char c;
	};

public:
	DataType(char ch) { varytype = character; c = ch; };
	DataType(int in) { varytype = integer; i = in; };
	DataType(double fl) { varytype = floatingpoint; f = fl; };
	void show();
};

void DataType::show() {

	switch (varytype) {
	case character:
		cout << "�ַ���:" << c << endl; break;
	case integer:
		cout << "����:" << i << endl; break;
	case floatingpoint:
		cout << "������" << f << endl; 
	}
}

int main() {
	DataType type1('B');
	DataType type2(87);
	DataType type3(1e10);
	type1.show();
	type2.show();
	type3.show();

	system("pause");
	return 0;

}
