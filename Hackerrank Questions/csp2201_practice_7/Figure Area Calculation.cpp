/*You have been given a task to create a class Area_Figure and a class CSquare ,and calculate the circumference and area of the figure where
     Surface is calculated as dSide*dSide
    Circumference is  4.0*dSide
     Side returns the value of dSide
Sample Input:
4.86
5.11
Sample Output:
Surface=23.6196
Circumference=19.44
Surface=26.1121
Circumference=20.44
Sample Input:
 2.22
1.98
Sample Output:
Surface=4.9284
Circumference=8.88
Surface=3.9204
Circumference=7.92
*/
#include <iostream>

using namespace std;

class Area_Figure
{
protected:
double dSide;
public:
Area_Figure(double a){dSide=a;};
    virtual       ~Area_Figure(){};
double Surface(){
        return (dSide*dSide);
    }
    double Circumference(){
        return (4*dSide);
    }
};
class CSquare:public Area_Figure
{
    public:
    CSquare(double d):Area_Figure(d){
        dSide= d;
    }
    double Surface(){
        return (dSide*dSide);
    }
    double Circumference(){
        return (4*dSide);
    }
};
int main()
{
    double s1,s2;
    cin>>s1>>s2;
CSquare Square_1(s1);

cout<<"Surface="
    <<Square_1.Surface()<<endl
    <<"Circumference="
    <<Square_1.Circumference()<<endl;

Area_Figure* ptrFigure = new CSquare(s2);
cout<<"Surface="
    <<ptrFigure->Surface()<<endl
    <<"Circumference="
    <<ptrFigure->Circumference()<<endl;

delete ptrFigure;

return 0;
}
