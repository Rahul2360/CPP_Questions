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
