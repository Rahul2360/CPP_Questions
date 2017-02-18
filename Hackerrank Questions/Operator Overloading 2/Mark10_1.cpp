/*WAP to apply unary operators overloading ﴾‐, ++ and ‐‐﴿ on a point
Sample Input
2 4
Sample Output
Entered point is
2X+4Y
After negation
‐2X‐4Y
After increment
3X+5Y
After decrement
1X+3Y
Explanation
Sample Input
Two numbers are given: first is the X value and second is the Y value of the point*/
#include <iostream>
using namespace std;
class point
    {
    int x,y;
    public:
      /* Enter your code here.*/
      point();
    void set();
    point operator - ();
    void operator ++ ();
    void operator -- ();
    void show();
};
point::point()
{
    x=0;
    y=0;
}
void point::set()
{
    cin >> x >> y;
}
point point::operator- ()
{
    point temp;
    temp.x=-x;
    temp.y=-y;
    return temp;
}
void point::show()
{
    if(y < 0)
        cout << endl <<  x << "X"  << y << "Y" ;
    else
        cout << endl <<  x << "X"<< "+" << y << "Y" ;
}
void point::operator ++ ()
{
    x=x+1;
    y=y+1;
}
void point::operator -- ()
{
    x=x-1;
    y=y-1;
}
int main() {
    point P1,P2,P3;
    P1.set();
    P3=P1;

    cout<<"Entered point is";
    P1.show();

    P2 = -P1;
    cout<<"\nAfter negation";
    P2.show();

    ++P1;
    cout<<"\nAfter increment";
    P1.show();

    --P3;
    cout<<"\nAfter decrement";
    P3.show();

    return 0;
}
