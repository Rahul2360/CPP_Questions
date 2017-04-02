/*employees of some particular bank want an application interface for performing cash transaction online so they have created an
app . Create a class named employee with data members ‐‐account_no﴾long int﴿, balance and member function void get_data﴾﴿
and void display_data﴾﴿.
Class beneficiary has data member‐ b_acc_no﴾long int﴿ , b_bal and b_amt. member function of this class are void get_b_data﴾﴿
and void transfer﴾﴿ and void print﴾﴿.
transfer function is used to transfer amount from employee account to beneficiary account . If amount to be transferred is less
than employee's balance then print "insufficient balance".
Sample input:
12345 //employee acc no
2000 //balance
19876 //beneficiary acc no
1000 // balance in beneficiary acc
500 // amount to be transferred
Sample output:
12345
1500 //500 deducted from employee
19876
1500 //500 added to beneficiary*/
#include<iostream>
using namespace std;
class emp
    {
    protected:
    long int acc_no;
    long int balance;
    public:
    void get_data();
    void display();
};
class beneficiary:public emp
    {
    protected:
    long int b_accno;
    long int b_bal;
   int amt;
    public:
    void get_b_data();
    void transfer();
    void print();
};

int main()
{
    beneficiary ob;
    ob.get_b_data();
    ob.transfer();
    ob.print();

}
