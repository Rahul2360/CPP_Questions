/*Complete the code to accept two values from the user,calculate the difference and throws an exception when second number is greater than the first one.
sample input
1//first input
3//second input
sample output
wrong input*/
#include <iostream>
using namespace std;
void sub(int a,int b){
    if(b>a)
    throw b;
    else
        cout<< a-b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num1,num2;
    cin >> num1 >> num2;
    try{
        sub(num1,num2);
    }
    catch(int){
        cout << "wrong input";
    }
    return 0;
}
