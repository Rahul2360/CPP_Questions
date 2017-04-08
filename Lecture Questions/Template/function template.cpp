#include<iostream>
using namespace std;
template<class T>
void show(T x)
{
    cout << "x="  << x << endl;
}
int main()
{
    int i;
    cin >> i;
    show(i);
    float f;
    cin >> f;
    show(f);
    char d;
    cin >> d;
    show(d);
}
