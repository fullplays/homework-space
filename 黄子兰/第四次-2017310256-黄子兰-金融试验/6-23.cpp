#include <iostream>
using namespace std;
const int N = 8;
class Student{
public:
double average(){
double sum = 0;
for(int i = 0;i<N;i++)
sum += _grade[i];
return sum/N;
}
void input(void){
for(int i = 0;i<N;i++){
cout << "�������" << i+1 << "��ͬѧ�ĳɼ�:" << flush;
cin >> _grade[i];
}
}
private:
double _grade[N];
};
int main (void){
Student s;
s.input();
cout << "ƽ���ɼ���" << s.average() << endl;
return 0;
} 
