/*WAP to apply unary operators ++ and ‐‐ on a distance
Sample Input
5 200
Sample Output
Entered distance is
5 kms 200 mtrs
After Increment
6 kms 200 mtrs
After Decrement
5 kms 200 mtrs*/
#include <iostream>
using namespace std;
class dist
    {
    int kms,m;
    public:
    //Enter your code here
    dist();
    void show();
    void operator++();
    void operator--();
};
dist::dist()
{
    cin >> kms >> m;
}
void dist::show()
{
    cout << endl << kms << " kms " << m << " mtrs";
}
void dist::operator ++()
{
    kms++;
}
void dist::operator --()
{
    kms--;
}
int main() {
   dist D1;
    cout<<"Entered distance is";
    D1.show();
    ++D1;
    cout<<"\nAfter Increment";
    D1.show();
    --D1;
    cout<<"\nAfter Decrement";
    D1.show();
    return 0;
}
