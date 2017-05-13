/*Create a function template value to return the sum of the array upto
a specified position. Array size is 5 .
Sample Input:
//elements of array
1
2
1
2
1
3// position
Sample Output:
sum upto 3 is 4
*/
#include<iostream>
using namespace std;
void read(float a[5])
{
    for(int i=0;i<5;i++)
        cin >> a[i];
}
float value(float a[5],int p)
{
    float sum=0;
    for(int i=0;i<p;i++)
        sum=sum+a[i];
    return sum;
}
int main()
{
    float Array[5];
    int position;
    read(Array);
    cin>>position;
    cout<<"sum upto "<<position<<" is "<<value(Array,position);
    return 0;
}
