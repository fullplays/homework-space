#include<iostream>
using namespace std;

class shape
{
public:
	shape() {
		cout << "���ڹ������" << endl;
	};
	~shape() {};
private:

};
class circle : public shape
{
private: float radius;

public:
	circle(float r) :radius(r) {
		cout << "���ڹ������" << endl;
	};
	~circle() {};
	float getarea() {
		return 3.14*radius*radius;
	};
};


int main() {
	circle circle1(3);
	
	cout << "the area of circle1 is " << circle1.getarea()<<endl;
	
}