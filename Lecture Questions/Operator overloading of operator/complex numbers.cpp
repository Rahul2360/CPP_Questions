#include<iostream>
using namespace std;
class Complex
{
public:
    int real;
    int img;
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    friend ostream & operator << (ostream &,const Complex &);
    friend istream & operator >> (istream &,Complex &);
};
ostream & operator << (ostream & output,const Complex &d)
    {
        output << d.real << "+ i" << d.img << endl;
        return output;
    }
istream & operator >> (istream & input,Complex &d)
    {
        input >> d.real >> d.img;
        return input;
    }
int main()
{
    Complex obj1,obj2;
    cout << "Enter the real and img part" << endl;
    cin >> obj1;
    cout << "Value of obj1=" << obj1;
    cout << "Enter the real and img part" << endl;
    cin >> obj2;
    cout << "Value of obj2=" << obj2;
}

