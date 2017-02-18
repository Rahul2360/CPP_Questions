/*WAP to overload +,‐, * and / to add, subtract, multiply and divide two complex numbers
Sample Input
4 6
2 3
2
3
Sample Output
6+9i
6+8i
7+9i
Sample Input
2 1
3 4
5
1
Sample Output
5+5i
7+6i
3+2i
Explanation
Sample Input
First two lines are the two complex numbers
next two lines are the two integer numbers
Sample Output
First line: Addition of two complex numbers
Second line: First complex number + first integer
Third line: First complex number + second integer*/
#include <iostream>
using namespace std;
class complex
    {
    int real,imag;
    public:
    friend complex operator+(int,complex);
    friend complex operator+(complex,int);
    friend complex operator +(complex,complex);
    void show();
    void set();
    /* Enter your code here.*/
};
complex operator+(complex a,complex b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return temp;
}
void complex::set()
{
    cin >>real >> imag;
}
void complex::show()
{
    cout << real << "+" << imag << "i" << endl;
}
complex operator+(complex a,int b)
{
    complex temp;
    temp.real=a.real+b;
    temp.imag=a.imag+b;
    return temp;
}
complex operator+(int a,complex b)
{
    complex temp;
    temp.real=a+b.real;
    temp.imag=a+b.imag;
    return temp;
}
int main() {
    complex c1,c2,c3,c4,c5;
    int a,b;
    c1.set();//First complex number
    c2.set();//Second complex number
    cin>>a; //First integer
    cin>>b;//Second integer
    c3=c1+c2;
    c3.show();
    c4=c1+a;
    c4.show();
    c5=b+c1;
    c5.show();
    return 0;
}

