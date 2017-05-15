/*Customer visits a supermarket where he can pay either by cash or by cheque according to item code and price of items bought.
 Cash_Payment and Check_Payment are derived from base class Bill which contains item_code ,price of items and total .
 If user wants to pay by cash ,only total will be printed by doing sum of all prices of items bought.
 If user wants to pay be cheque, alongwith total, cheque number and bank name are also printed.

Sample Input1
5
1
2000
2
2000
3
3000
4
4000
5
5000
2

Sample Output1
TOTAL=16000

Sample Input 2:
3
1
5000
2
4000
3
9000
1
UCO
987653222

Sample Output:
TOTAL=18000
BANK NAME=UCO
CHEQUE NUMBER=987653222*/
#include <iostream>
#include <string.h>
using namespace std;
class Bill
{
private:
    int item_code[5];
    float price[5];
    float total;
public:
    Bill(int items[],float p[],int n);
    void show_Bill_Details();
};
class Cash_Payment:public Bill
{
    int num;
    public:
    Cash_Payment(int items[],float p[],int n);
    void show_Cash_Payment();
};
class Check_Payment:public Bill
{
    private:
    long int chec_no;
    char bank_name[20];
    public:
    Check_Payment(int items[],float p[],long int cno,char name[],int n);
    void show_Cheque_Payment();
};
Bill::Bill(int items[],float p[],int n)
{
    for(int i=0;i<n;i++)
        total+=p[i];
}
Cash_Payment::Cash_Payment(int items[],float p[],int n):Bill(items,p,n)
{
    for(int i=0;i<n;i++)
        num+=p[i];
}
Check_Payment::Check_Payment(int items[],float p[],long int cno,char name[],int n):Bill(items,p,n)
{
    chec_no=cno;
    strcpy(bank_name,name);
}
void Bill::show_Bill_Details()
{
    cout << "TOTAL=" <<  total << endl;
}
void Cash_Payment::show_Cash_Payment()
{
    cout << "TOTAL=" << num;
}
void Check_Payment::show_Cheque_Payment()
{
    Bill::show_Bill_Details();
    cout << "BANK NAME=" << bank_name << endl;
    cout << "CHEQUE NUMBER=" << chec_no << endl;
}
int main()
{
    int n,c[10],option;
    float p[10];
    cin>>n; //no of items
    for(int i=0;i<n;i++)
    {
        cin>>c[i]; //item code
        cin>>p[i];// price
    }
    cin>>option;// by cheque or cash
    if(option==1)
    {
        char name[30];
        long int c_num;
        cin.ignore();
        cin.getline(name,30);// name of bank
        cin>>c_num; //cheque number
        Check_Payment Chek(c,p,c_num,name,n);
        Chek.show_Cheque_Payment();
    }
    else
    {

        Cash_Payment CP(c,p,n);
        CP.show_Cash_Payment();
    }
    return 0;
}
