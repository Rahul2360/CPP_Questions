#include<iostream>
using namespace std;
template<class T>
T square(T num)
{
    return (num*num);
}
int main()
{
    int a;
    cin >> a;
    cout << "Square of a=" << square(a);
    double d;
    cin >> d;
    cout << "Square of double is " << square(d);
}

