#include <iostream.h>
#include <string.h>
void reverse(char *s, char *t){
      char c;
      if (s < t){
           c = *s;
           *s = *t;
           *t = c;
           reverse(++s, --t);
	  }
}
void reverse( char *s){
     reverse(s, s + strlen(s) - 1);
}

void main(){
     char str1[20];
     cout << "����һ���ַ�����";
     cin >> str1;
     cout << "ԭ�ַ���Ϊ��" << str1 << endl;
     reverse(str1);
     cout << "����ת��Ϊ��" << str1 << endl;
}