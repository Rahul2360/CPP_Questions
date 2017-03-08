/*Riya works in two slots,﴾Morning and Evening﴿.For both slots she maintain a separate list
of some size which contains the number of items she sold in one slot.At the end of day
she adds both the lists index wise. ﴾ item1 in list1 will be added to item2 in list2﴿. But the
calculator on which she calculated has problem that when addition goes beyond 100 ,the
value decremented by 100.Help Riya to add two lists.
CONSTRAINT:
Array elements must be in range from 1 to 100﴾including 1 and 100﴿
If after addition value become greater than 100, reduce the value by 100.﴾eg. 116 will
result to 16﴿
sample Input
5 //list size
input for list 1
1 2 3 4 5
Input for list 2
2 3 4 5 6
sample output
3 5 7 9 11

2nd run
Sample Input
4 //list size
78 81 12 45
input for list 2
38 21 67 34
Sample output
16 2 79 79*/
#include<iostream>
using namespace std;
    int size;
class sample
{
public:
    long int *arr;
    friend sample operator +(sample s1 ,sample s2)
    {
        int i;
        arr = new long int[size];
        for(i=0;i<size;i++)
            cin >> arr[i];
        sample temp;
        int i;
        for(i=0;i<size;i++)
            temp.arr[i]=s1.arr[i] +s2.arr[i];
        return temp;
    }
};

int main() {
    cin>>size;
    sample a1,a2,a3;
    //cin>>a1;
    //cin>>a2;
    a3=a1+a2;
    //cout<<a3;
    return 0;
}
