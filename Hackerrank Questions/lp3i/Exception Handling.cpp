/*Exception Handling
Write a program to raise Division by zero exception.
*/
#include<iostream>
using namespace std;
void divide(int n1,int n2)
{
    try{
        if(n2==0)
            throw n2;
    }
    catch(int){
        throw 1;
    }
    cout << n1/n2;
}
int main() {
    int num1,num2;
    cin>>num1>>num2;
    try{
    divide(num1,num2);
    }
    catch(int)
        {
        cout<<"Division by zero Exception";
    }
    return 0;
}
