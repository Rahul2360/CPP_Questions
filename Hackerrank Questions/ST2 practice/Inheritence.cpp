/*Write a program to calculate square and cube of a number N using classes Number,Square
and Cube.
Constraint:
1<=N<=1000
Sample Input:
2
Sample Output:
Square of 2 is: 4
Cube of 2 is: 8 */

#include <string>
#include <iostream>
using namespace std;
class Square;
class Cube;
class Number
{    private:
        int num;
    public:
        Number(int x);
        int returnNumber();
};



        //sqr and cube are integer variables.
        sqr =objS->getSquare();//objS is a pointer of Square class
        cout << "Square of "<< objS->returnNumber() << " is: " << sqr  << endl;
        cube=objC->getCube();//objC is a pointer of Cube class
        cout << "Cube   of "<< objS->returnNumber() << " is: " << cube << endl;
}
