#include<iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "In base class" << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "In derived class" << endl;
    }
};
int main()
{
    base *b;
    derived d;
    b =&d;
    b->show(); //Late binding
}
