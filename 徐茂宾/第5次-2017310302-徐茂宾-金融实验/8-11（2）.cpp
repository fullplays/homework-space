// 8-11(2).cpp 

#include "pch.h"
#include<iostream>
using namespace std;

class Shape {
public:
	Shape() {}
	~Shape() {}
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
	int getVertexCount()const;
};

class Rectangle :public Shape {
public:
	Rectangle(float longth, float width) :x(longth), y(width) {};
	~Rectangle() {};
	virtual float getArea() { return x * y; }
	float getPerim() { return 2 * (x + y); }
	virtual float getLength() { return x; }
	virtual float getWidth() { return y; }
protected:
	float x, y;
};

class Circle :public Shape {
public:
	Circle(float rr) :r(rr) {};
	~Circle() {}
	float getArea() { return 3.14*r*r; }
	float getPerim() { return 2 * 3.14*r; }
private:
	float r;
};

class Square :public Rectangle {
public:
	Square(float length) :Rectangle(length, length) {};
	~Square() {}
	float getArea() { return length * width; }
	float getPerim() { return 2 * length + 2 * width; }
	float length = getLength();
	float width = getWidth();
};

//typeid
int Shape::getVertexCount() const {
	const type_info&info = typeid(*this);
	if (info==typeid(Circle) )
		return 0;
	else if (info==typeid(Rectangle)  ||info==typeid(Square) )
		return 4;
	else
		return -1;
}

int main() {
	Shape *shape;
	shape = new Rectangle(3, 4);
	cout << "长方形的面积是：" << shape->getArea() << endl;
	cout << "长方形的边长是：" << shape->getPerim() << endl;
	cout << "长方形的顶点个数是：" << shape->getVertexCount() << endl;
	delete shape;
	shape = new Circle(3);
	cout << "圆形的面积是：" << shape->getArea() << endl;
	cout << "圆形的边长是：" << shape->getPerim() << endl;
	cout << "圆形的顶点个数是：" << shape->getVertexCount() << endl;
	delete shape;
	shape = new Square(4);
	cout << "正方形的面积是：" << shape->getArea() << endl;
	cout << "正方形的边长是：" << shape->getPerim() << endl;
	cout << "正方形的顶点个数是：" << shape->getVertexCount() << endl;
	delete shape;
	return 0;
}
