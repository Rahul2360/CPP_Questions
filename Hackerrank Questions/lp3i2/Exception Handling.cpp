/*Exception Handling
Write a program to find whether or not a student is eligible for playing cricket in under 19 team.
A player is eligible only if his/her age is greater than equal to 13 or less than equal to 19.
Sample Input 1:
13
Sample Output 1:
Eligible
Sample Input 1:
-5
Sample Output 1:
Wrong input*/
#include<iostream>
using namespace std;
void range(int x)
{
//write your code here
    try{
        if(x>=13 && x<=19)
            throw 1;
        else if(x<0)
            throw 2;
        else
            throw 3;
    }
    catch(int x)
        {
        throw x;
    }
}
int main()
{
    int age;
    cin>>age;
    try{
        range(age);
    }
        catch(int a)
    {
        if(a==1)
            cout<<"Eligible";
        else if(a==2)
            cout<<"Wrong input";
        else
            cout<<"Not Eligible";
    }
    return 0;
}
