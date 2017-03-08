#include<iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout << "SHOW_BASE_CLASS";
    }
    virtual void print() = 0; // pure virtual i.e. we cannot make object of this class.
    //{
        //cout << "PRINT_BASE_CLASS";
    //}
};
class derived:public base
{
public:
    void show()
    {
        cout << "SHOW_CHILD_CLASS";
    }
    void print()
    {
        cout << "PRINT CHILD CLASS";
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr =&d;
    bptr->print();
}
