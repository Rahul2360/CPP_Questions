/*WAP to overload the increment and decrement operators on the array class.
Sample Input
1 2 3 4 5
1 2 3 4 5
Sample output
2 4 6 8 10*/
#include <iostream>
using namespace std;
class array
    {
    int *arr;
    int size;
    public:
    //Enter your code here
    array();
    array(int);
    void set();
    array operator+(array);
    void show();
};
array::array()
{
    size=0;
}
array::array(int a)
{
    size=a;
}
void array::set()
{

    arr=new int[size];
    for(int i=0;i<size;i++)
        cin >> arr[i];
}
array array::operator+(array add)
{
    array temp;
    temp.arr=new int[size];
    temp.size=size;
    for(int i=0;i<size;i++)
        temp.arr[i] = arr[i] + add.arr[i];
    return temp;
}
void array::show()
{
    for(int i=0;i<size;i++)
        cout << arr[i] << " ";
}
int main() {
    array A1(5),A2(5),A3(5);
    A1.set();
    A2.set();
    A3 = A1+A2;
    A3.show();
    return 0;
}
