/*Create a fruit basket class with a number of apples and mangoes as data members . Overload the '+' operator to count how many apples and mangoes
are there in the basket.

Sample Input
7
9

Sample Output
16

Explanation: In sample input we have entered 7 apples and 9 mangoes. So total fruit in the basket is 16 i.e. displayed in the output.*/

#include<iostream>
using namespace std;
class basket
{
    int apples;
    int mangoes;
    int sum;
public:
    basket();
    void getapplesData();
    void getmangoesData();
    void show();
    basket operator +(basket&);
};
basket::basket()
    {
    apples=0;
    mangoes=-0;
}
void basket::getapplesData()
    {
    cin >> apples;
}
void basket::getmangoesData()
    {
    cin >> mangoes;
}
void basket::show()
    {
    cout << sum;
}
basket basket::operator + (basket&obj)
    {
    basket temp;
    temp.sum = apples+obj.mangoes;
    return temp;
}
int main()
{
    basket basket1,basket2,basket3;
    basket1.getapplesData();
    basket2.getmangoesData();
    basket3 = basket1+basket2;
    basket3.show();
    return 0;
}
