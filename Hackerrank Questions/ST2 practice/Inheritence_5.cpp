Define a class Customer with the following specifications.
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
900 // Net‐price
