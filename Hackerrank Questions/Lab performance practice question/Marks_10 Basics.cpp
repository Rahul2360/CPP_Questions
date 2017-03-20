/*Create a class named 'String' to model strings in c++.
Take your clues from the main function and code
stub defined in this problem.

Sample Input:
Tanmeet

Sample Output:
Tanmeet*/

#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char name[30];
public:
    void getStr();
    void showStr();
};
void String::getStr()
{
    cin >> name;
}
void String::showStr()
{
    cout << name;
}
int main()
{
    String s1;
    s1.getStr();
    s1.showStr();
    return 0;
}
