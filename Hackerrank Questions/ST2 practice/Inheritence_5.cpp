/*Define a class Customer with the following specifications.
Protected Members :
Customer_no integer
Customer_name char ﴾20﴿
Qty integer
Price ,
Discount,
Netprice float
Member Functions: Public members: * A function Input﴾ ﴿ – to read data members﴾Customer_no, Customer_name, Quantity and
Price﴿
create Another class Seller has member function Caldiscount﴾﴿. * Caldiscount ﴾ ﴿ – To calculate Discount according to TotalPrice
and NetPrice
TotalPrice = Price*Qty
TotalPrice >=50000 – Discount 25% of TotalPrice
TotalPrice >=25000 and TotalPrice <50000 - Discount 15% of TotalPrice
TotalPrice <250000 - Discount 10% of TotalPrice
Netprice= TotalPrice‐Discount
Show﴾ ﴿ – to display Customer details.
Sample input:
123 //customer_no
Ravi //customer_name
10 //quantity
100 // Price
Sample output:
100
1000 //total price=quantity*price
100 //discount
900 // Net‐price*/
#include <iostream>
using namespace std;
class customer
    {
    protected:
    int c_no;
    char name[20];
    int qty;
    int price;
    float discount;
    float net_price;
    public:
    void input();
};
class seller :public customer
    {
    public:
    float total_price;
    void caldiscount();
    void show();
};
void customer::input()
{
    cin >> c_no;
    cin.ignore();
    cin.getline(name,20);
    cin >> qty;
    cin >> price;
}
void seller::caldiscount()
{
    input();
    total_price =(float)(price * qty);
    if(total_price >= 50000)
        discount = 0.25 * total_price;
    else if(total_price >= 25000 && total_price < 50000)
        discount = 0.15 * total_price;
    else
        discount = 0.1 * total_price;
    net_price = total_price - discount;
}
void seller::show()
{
    cout << c_no << endl;
    cout << name << endl;
    cout << qty << endl;
    cout << price << endl;
    cout << total_price << endl;
    cout << discount << endl;
    cout << net_price << endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    seller ob;
    ob.caldiscount();
    ob.show();
    return 0;
}
