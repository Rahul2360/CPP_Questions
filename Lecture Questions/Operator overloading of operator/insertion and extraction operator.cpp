#include<iostream>
using namespace std;
class Dist
{
    int feet;
    int inches;
public:
    Dist()
    {
        feet=0;
        inches=0;
    }
    Dist(int f,int i)
    {
        feet=f;
        inches=i;
    }
    friend ostream & operator << (ostream & output,const Dist &d)
    {
        output << "F=" << d.feet << " & inches=" << d.inches << endl;
        return output;
    }
    friend istream & operator >> (istream & input, Dist &d)
    {
        input >> d.feet >> d.inches;
        return input;
    }
};
int main()
{
    Dist obj1(5,10),obj2(15,20),obj3;
    cin >> obj3;
    cout << "Value of obj1=" << obj1;
    cout << "Value of obj2=" << obj2;
    cout << "Value of obj3=" << obj3;
}
