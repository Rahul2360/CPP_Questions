/*WAP to overload pre increment﴾++﴿ and pre decrement﴾--﴿ for a time ﴾seconds﴿
Sample Input
6 59 59
Sample Output
Entered Time is
6:59:59
After Increment
7:0:0
After Decrement
6:59:59*/
#include <iostream>
using namespace std;
class T
{
    int h,m,s;
    public:
    //Write your code here
    T();
    void show();
    void operator ++ ();
    void operator -- ();
};
T::T()
{
    cin >>h >> m >> s;
}
void T::show()
{
    cout<<endl << h << ":" << m << ":" << s;
}
void T::operator ++()
{
    s++;
    if(s>59)
    {
        s-=60;
        m+=1;
    }
    if(m>59)
    {
        m-=60;
        h+=1;
    }
}
void T::operator --()
{
    s--;
    if(s<0)
    {
        s+=60;
        m-=1;
    }
    if(m<0)
    {
        m+=60;
        h-=1;
    }
}
int main() {
    T T1;
    cout<<"Entered Time is";
    T1.show();
    ++T1;
    cout<<"\nAfter Increment";
    T1.show();
    --T1;
    cout<<"\nAfter Decrement";
    T1.show();
     return 0;
}
