/*Write a program to sort an array (n=5) using Templates.
Sample Input:
10// First array
50
40
30
20
1.1//Second Array
5.5
3.3
4.4
2.2
Sample Output:
10 20 30 40 50
1.1 2.2 3.3 4.4 5.5*/
#include<iostream>
using namespace std;
template<class T>
/*void bubble (T a[],int n)
{
   int i,j;
   for(i=0;i<n-1;i++)
      for(j=0;j<n-i-1;j++)
         if(a[j]>a[j+1])
         {
             swap(a[j],a[j+1]);
         }
}
template<class S>
void swap(S &x,S &y)
{
  S temp;
  temp=x;
  x=y;
  y=temp;
}*/
void bubble(T a[], int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                T element;
                element = a[i];
                a[i] = a[j];
                a[j] = element;
            }
        }
    }
}
int main()
{
    int x[5];
    float y[5];
    for(int i=0;i<5;i++)
    {cin>>x[i];}
    for(int i=0;i<5;i++)
    {cin>>y[i];}
    bubble(x,5);
    bubble(y,5);
    for(int i=0;i<5;i++)
    {cout<<x[i]<<" ";}
    cout<<endl;
    for(int i=0;i<5;i++)
    {cout<<y[i]<<" ";}
    return 0;
}
