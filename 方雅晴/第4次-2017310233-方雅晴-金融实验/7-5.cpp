 #include<iostream>
using namespace std;

class Shape{
	public:
		float getarea(){return 1;}
}; 

class Rectangle:public Shape{
	public:
		Rectangle(float len,float wid):length(len),width(wid){
		}
		float getarea(){return length*width;}
	private:
		float length,width;
};

class Circle:public Shape{
	public:
		Circle(float r):radius(r){
		}
		float getarea(){return 3.14*radius*radius;}
	private:
		float radius;
}; 

class Square:public Rectangle{
	public:
		Square(float len):Rectangle(len,len){
		};
		
};

int main(){
Rectangle rect(2,3);
Circle	cir(2);
Square  squ(2);
cout<<"Բ���Ϊ��"<<cir.getarea()<<endl;
cout<<"���������Ϊ��"<<rect.getarea()<<endl;
cout<<"���������Ϊ��"<<squ.getarea() <<endl;
return 0;
} 
