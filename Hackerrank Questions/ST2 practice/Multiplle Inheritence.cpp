/*In a multiple Inheritance Problem, Base class1﴾one﴿ contains the information of first number and Base class2﴾two﴿ contains the
information of second number.
Derived Class﴾last﴿ inherited from both the base classes﴾one and two﴿ gives the product of the first number and the second
number.
Sample Input:
33 //first no
44 //second no
Sample Output:
33
44
1452 //product of two nos*/



#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;
class one
{
protected:
    int m;
public:
    void get_m();
};
void one::get_m(){
    cin >> m;
}
class two
{
    public:
    int n;
    void get_n(){
        cin >> n;
    }
};
class last:public one,public two
{
    int product;
    public:
    void get_m(){
        one::get_m();
        cout << m << endl;
    }
    void get_n(){
        two::get_n();
        cout << n << endl;
    }
    void display(){
        product = m*n;
        cout << product;
    }
};
int main() {
    last l;
    l.get_m();
    l.get_n();
    l.display();
    return 0;
}
