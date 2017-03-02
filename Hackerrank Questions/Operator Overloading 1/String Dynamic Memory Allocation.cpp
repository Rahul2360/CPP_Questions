/*Complete given incomplete code to concatenate two strings using operator overloading.
Sample Input
Hello World
Chitkara
Sample Output
Hello World Chitkara*/
#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{ char *ptr;
  int size;
  public:
  Mystring();
  void getdata();
  void display();
  void operator=(const Mystring&);
  friend Mystring operator +(Mystring&,Mystring&);
  ~Mystring();
};
int main()
{ Mystring str1,str2,str3;
  str1.getdata();
  str2.getdata();
  str3=str1+str2;
  str3.display();
  return 0;
}
