/*The fibonacci sequence begins with 0 and 1 (which are the first and the second terms
respectively). After this, every element is the sum of the preceding elements:i.e. 0 1 2 3 5 8 13 21...
Generate n numbers of this series by overloading a prefix ++ increment operator.

Sample Input
How many fibonaci number are to be displayed
5

Sample Output
1 2 3 5 8*/
#include<iostream>
using namespace std;
class fibonacci
{
private:
    long int f0,f1,fib;
public:
    fibonacci();
    fibonacci operator ++();
    void display();
};
int main()
{
    fibonacci obj;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        obj.display();
        ++obj;
    }
}

