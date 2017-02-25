/*MinMax class find the minimum and maximum values from the given values.
MinMax class has following data members and public member functions
int m_nMin ,int m_nMax
MinMax﴾﴿ : Default constructor to initialize data members of class with zero.
MinMax﴾int,int﴿: Parameterized constructor
int GetMin﴾﴿ ; // it will return m_nMin
int GetMax﴾﴿ //it will return m_nMax
void getdata﴾﴿ //Function to enter values from keyboard.
friend MinMax operator+﴾const MinMax &cM1, const MinMax &cM2﴿; //Will find max and
min value in object cM1 and cM2
friend MinMax operator+﴾const MinMax &cM, int nValue﴿; // will find max and min value
in object cM and variable nValue
friend MinMax operator+﴾int nValue, const MinMax &cM﴿; //will find max and min value
between nValue variable and object cM
Sample Input
10 15
8 11
3 12
Sample output
Result:﴾3, 16﴿
3 is minimum number is out of 10 ,15,8 ,11,3 ,12,5,8,16
16 is maximum number is out of 10,15,8,11,3,12,5,8,16*/
#include<iostream>
using namespace std;
class MinMax
{
private:
    int m_nMin; // The min value
    int m_nMax; // The max value

public:
    MinMax();
    MinMax(int nMin, int nMax);
    int GetMin() { return m_nMin; }
    int GetMax() { return m_nMax; }
 	void getdata();
    friend MinMax operator+(const MinMax &cM1, const MinMax &cM2);
    friend MinMax operator+(const MinMax &cM, int nValue);
    friend MinMax operator+(int nValue, const MinMax &cM);
};
MinMax::MinMax()
{
    m_nMin=0;
    m_nMax=0;
}
MinMax::MinMax(int nMin,int nMax)
{
    m_nMin=nMin;
    m_nMax=nMax;
}
void MinMax::getdata()
{
    cin >> m_nMin >> m_nMax;
}
MinMax operator+(const MinMax &cM1, const MinMax &cM2)
{
    MinMax temp;
    if(cM1.m_nMin >=cM2.m_nMax )
        return temp.m_nMin ;
    else
        return temp.m_nMax ;
}
MinMax operator+(const MinMax &cM, int nValue)
{

}
MinMax operator+(int nValue, const MinMax &cM)
{

}
int main()
{
    MinMax cM1,cM2,cM3;
    cM1.getdata();
    cM2.getdata();
    cM3.getdata();

    MinMax cMFinal=cM1+cM2+5+8+cM3+16;

    cout<<"Result:("<<cMFinal.GetMin()<<", "<<cMFinal.GetMax()<< ")"<<endl;

    return 0;
}
