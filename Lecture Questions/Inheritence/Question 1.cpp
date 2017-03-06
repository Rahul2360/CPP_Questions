// Create a class named shape that is inherited by two class circle and cone. in class circle find area.
// In cone class find volume=1/3(pi*r*r*h)
#include<iostream>
#define pi 3.14
using namespace std;
class shape
{
protected:
    int radius;
public:
    void get_length()
    {
        cout << "Enter the radius" << endl;
        cin >> radius;
    }
};
class circle:public shape
{
protected:
    float a;
public:
    void get_circle_length()
    {
        get_length();
    }
    void area()
    {
        a = (float)(pi*radius*radius);
        cout << "Area is " << a << endl;
    }
};
class cone:public shape
{
protected:
    int h;
    float v;
public:
    void get_cone_length()
    {
        get_length();
        cout << "Enter the height of cone" << endl;
        cin >> h;
    }
    void volume()
    {
        v = (float)1/3*(pi*radius*radius*h);
        cout << "volume is " << v << endl;
    }
};
int main()
{
    circle ob1;
    ob1.get_circle_length();
    ob1.area();
    cone ob2;
    ob2.get_cone_length();
    ob2.volume();
}

