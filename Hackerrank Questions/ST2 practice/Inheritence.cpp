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
Number::Number(int x)
{
    num=x;
}
class Square:public Number
{
    public:
    Square(int x):Number(x){}
        int getSquare(){
        int i = returnNumber();
            return i*i;
    }
};
class Cube:public Number
{
    public:
    Cube(int x):Number(x){}
    int getCube(){
        int j=returnNumber();
        return j*j*j;
    };
};
int Number::returnNumber()
{
    return num;
}
int main(){
    int number;
    cin >> number;
    int sqr,cube;
    Square square(number);
    Cube cbe(number);
    Square *objS=&square;
    Cube *objC=&cbe;
        //sqr and cube are integer variables.
        sqr =objS->getSquare();//objS is a pointer of Square class
        cout << "Square of "<< objS->returnNumber() << " is: " << sqr  << endl;
        cube=objC->getCube();//objC is a pointer of Cube class
        cout << "Cube   of "<< objS->returnNumber() << " is: " << cube << endl;
}
