/*You have been given the task to swap the contents of two int and two int arrays using the concept of template overloaded function.
Sample input
10 20
0 1 0 4 1 9 9 6
0 1 0 8 2 0 1 6

Sample Output
20 10
01/08/2016
01/04/1996


Explanation
In Sample Input 10 and 20 are two integers
0 1 0 4 1 9 9 6 is the contents of first integer array
0 1 0 8 2 0 1 6 is the contents of second integer array
Size of the array is fixed and is taken as 8
*/
#include<iostream>
using namespace std;
template <typename T>
void mySwap(T &a, T &b);//for swapping tow integers
template <typename T>
void mySwap(T *a, T *b,  const int n); //for swapping two arrays
void Show(int a[]);//to display contents of array
const int Lim = 8;//size of the array
template<typename T>
void mySwap(T &a, T &b)
{
    T temp;
    temp = a;
    a=b;
    b = temp;
}
template<typename T>
void mySwap(T *a, T *b ,const int n)
{
    T temp[n];
    for(int i=0;i<n;i++){
        temp[i] = a[i];
        a[i] = b[i];
        b[i] = temp[i];
    }
}
void Show(int a[])
{
    for(int i=0;i<Lim-4;i+=2){
        cout << a[i] << a[i+1] << "/";
    }
    for(int i=4;i<Lim;i++)
        cout << a[i];
    cout << endl;
}
int main()
{
     int i,j;
     cin >>i>>j;
     mySwap(i,j);
     cout <<i <<" "<<j<<endl;
     int d1[Lim],d2[Lim];
     for(int i=0;i<Lim;i++)
        cin>>d1[i];
     for(int i=0;i<Lim;i++)
        cin>>d2[i];
     mySwap(d1,d2,Lim);
     Show(d1);
     Show(d2);
     return 0;
}
