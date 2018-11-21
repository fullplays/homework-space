#include <iostream>
using namespace std;

const float PI = (float)3.14159;

class Shape{
public:
    virtual float CalCircumference()=0;
    virtual float CalArea()=0;
};

//Բ��
class Roundness: public Shape{
public:
    Roundness(float r):radius(r)
    {}

    virtual float CalCircumference()
    {
        return 2 * PI * radius;
    }

    virtual float CalArea()
    {
        return PI * radius * radius;
    }
private:
    float radius;
};

//������
class Square: public Shape{
public:
    Square(float w):width(w)
    {}

    virtual float CalCircumference()
    {
        return 4 * width;
    }

    virtual float CalArea()
    {
        return width * width;
    }
private:
    float width;
};

//������
class Rectangle: public Shape{
public:
    Rectangle(float w, float h):width(w), hight(h)
    {}

    virtual float CalCircumference()
    {
        return 2 * (width + hight);
    }

    virtual float CalArea()
    {
        return hight * width;
    }
private:
    float width;
    float hight;
};

void main()
{
    Shape* roud = new Roundness(3);
    Shape* squ = new Square(3);
    Shape* rang = new Rectangle(3, 4);

    cout<<"Բ�ε��ܳ�:"<<roud->CalCircumference()<<" �����"<<roud->CalArea()<<endl;
    cout<<"�����ε��ܳ�:"<<squ->CalCircumference()<<" �����"<<squ->CalArea()<<endl;
    cout<<"�����ε��ܳ�:"<<rang->CalCircumference()<<" �����"<<rang->CalArea()<<endl;

}
