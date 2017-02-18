/*WAP to overload +,-, * and / to add, subtract, multiply and divide two complex numbers
Sample Input
4 6
2 1
1 2
3 2
Sample Output
7-1i
Explanation
Sample Input
Four complex numbers are given
In first line, first number is the real part and 2nd number is the imaginary part of first
complex number.
In second line, first number is the real part and 2nd number is the imaginary part of second
complex number.
In third line, first number is the real part and 2nd number is the imaginary part of third
complex number.
In forth line, first number is the real part and 2nd number is the imaginary part of
forth complex number.
Sample Output
is the result of C1+C2-C3*C4
means(4+6i)+(2+1i)-(1+2i)*(3+2i)*/
#include <iostream>
using namespace std;
class complex
    {
   int r,i;
public:
     complex();
    complex operator + (complex);
    complex operator - (complex);
    complex operator * (complex);
    void show();
};
complex::complex()
{
    cin >> r >> i;
}
complex complex::operator + (complex sum)
{
    complex addition;
    addition.r=r+sum.r;
    addition.i=i+sum.i;
    return addition;
}
complex complex::operator -(complex sub)
{
    complex minus;
    minus.r=r-sub.r;
    minus.i=i-sub.i;
    return minus;
}
complex complex::operator *(complex mul)
{
    complex multiply;
    multiply.r = ((r*mul.r) - (i*mul.i));
    multiply.i = ((r*mul.i) + (i*mul.r));
    return multiply;
}
void complex::show()
{
    if(i<0)
        cout << r  << i << "i";
    else
        cout << r << "+" << i << "i";
}
int main() {
    complex C1,C2,C3,C4,C5;
    C5=C1+C2-C3*C4;
    C5.show();
    return 0;
}
