// 4-12（2017310302-徐茂宾-金融实验班17）

#include "pch.h"
#include <iostream>
using namespace std;

class DataType {
	enum {character,integer,floating_point}vartype;
	union {char c;int i;float f;};
public:
	DataType(char ch) {
		vartype=character;
		c = ch;
	}
	DataType(int ii) {
		vartype=integer;
		i = ii;
	}
	DataType(float ff) {
		vartype=floating_point;
		f = ff;
	}
	void print();
};

void DataType::print() {
	switch (vartype){
	case character:
		cout << "字符型: " << c << endl;
		break;
	case integer:
		cout << "整型: " << i << endl;
		break;
	case floating_point:
		cout << "浮点型: " << f << endl;
		break;
	}
}
void main() {
	DataType A('c'), B(19), C(1.45F);
	A.print();
	B.print();
	C.print();
}