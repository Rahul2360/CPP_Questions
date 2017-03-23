/*A class bill is inherited by two classes cheque, cash in protected mode.
bill class has two members item_price,qty.
The product of the two, 1. price of the item and 2. quantity will give us the total bill.
class cheque again has two members cheque_no, cheque_amt.
Write a member function to test whether the amount in the cheque clears the bill or not.
if yes put the word "Clear" if no put the balance amount as "Balance=100" (100 is an
example).
Similarly class cash has 4 data members for the number of notes of 500,100,10,1.
Total is to be calculated from the notes and again matched with the bill.
If the bill is cleared with cash put the word "Clear" if no put the balance amount as
"Balance=100" (100 is an example).
Sample Input 1:
1 // for cheque clearance
10 //item_price
10 //qty
1234 //cheque_no
80 // cheque_amt
Sample Output 1:
100 //bill [item_price*qty]
Balance=20 //pending=100‐80=20
Sample Input 1:
2 //for cash payment
10 //item_price
10 //qty
0 //notes of 500
0 //notes of 100
10 //notes of 10
0 //notes of 1
Sample Output 1:
Clear*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class bill
{
	protected:
		int item_price,qty,bill;
	public:
		void get_bill();
};
void bill::get_bill(){
    cin >> item_price >> qty ;
}
class cheque:protected bill
{
    int cheque_number,amount,pending;
public:
    void get_cheque_details(){
        get_bill();
        cin >> cheque_number;
        cin >> amount;
    }
    void display(){
        bill = item_price*qty;
        cout << bill << endl;
        pending = bill - amount;
        if(pending <= 0)
            cout << "Clear" << endl;
        else
            cout << "Balance=" << pending << endl ;
    }

};
class cash:protected bill
{
    int n1,n2,n3,n4,total;
public:
    void get_cash(){
        cin >> item_price;
        cin >> qty;
        cin >> n1 >> n2 >> n3 >> n4;
    }
    void display() {
        bill = item_price*qty;
        n1 = n1*500;
        n2 = n2*100;
        n3 = n3*10;
        n4 = n4*1;
        total = n1+n2+n3+n4;
        if(total >=bill){
            cout << bill << endl;
            cout << "Clear";}
        else{
            cout << bill << endl;
            cout << "Balance=" << bill-total;}
    }
};
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cheque c;
		c.get_cheque_details();
		c.display();
	}
	else
	{
		cash d;
		d.get_cash();
		d.display();
	}
	return 0;
}
