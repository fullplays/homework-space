#include<iostream>
using namespace std;

class base{
	public:
	base(){cout<<"���๹��"<<endl; 
	}
	
}; 

class derived:public base{
	public:
		derived(){cout<<"�����๹��"<<endl;
		}
};

int main(){
	derived d;
	return 0;
}
