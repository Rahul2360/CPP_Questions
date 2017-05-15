/*Complete the code that accepts two values from the user,calculates the difference and throws the number
first number as exception if any of the input is less than 0 and when second number is greater than the first
throws second number as exception and displays the differnce otherwise.
sample input
1//first input
3//second input
sample output
wrong input
sample input
3
-2
sample output
wrong input
*/
#include <iostream>
using namespace std;
void sub(int a, int b)
    {
    try{
        if(b<0 || a<0)
            throw a;
        else if (b>a)
            throw b;
        else
            cout << a-b;
    }
catch(int ){
    cout << "wrong input";
    }
}
int main()
{
    int x,y;
    cin >> x >> y;
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        sub(x,y);
    return 0;
}
