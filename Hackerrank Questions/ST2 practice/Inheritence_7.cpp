/*Base Class name bill has three data members: item_code, price, total.
Class cash is derived from bill having deno, value, num and cheque is also derived from bill having chec_no,bank_name as data
members.
The customer is having an option to buy from cheque or cash.
Sample Input:
//Number of items
5
//itemcodes and prices
1
10
2
10
3
10
4
10
5
10
//Option Cheque/cash
2
//Num of Denominations
3
//1st Denomination
Rs. 100
//value of 1st Denomination
Rs. 50
//value of 2nd Denomination
2
//3rd Denomination
Rs. 10
//value of 3rd Denomination
2
Sample Output:
//Total
50
notes=3
100
2
50
2
10
2*/
#include <unordered_map>

using namespace std;
class bill
{

if(option==1)
    {
        char name[30];
        int c_num;
        cin>>c_num;
     cin.ignore();
        cin.getline(name,30);
        cheque c2(c,p,c_num,name);
        c2.show_check();
    }
    else
    {
        int num,d[10],v[10];

    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>d[i]>>v[i];
    }
    cash c1(c,p,d,v,num);
    c1.show_cash();
    }
}
