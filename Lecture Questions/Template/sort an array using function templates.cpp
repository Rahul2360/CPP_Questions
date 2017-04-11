#include<iostream>
using namespace std;
#define max 10
template<class type>
void Swap(type &a,type &b)
{
    type temp;
    temp = a;
    a=b;
    b = temp;
}
template<class type>
void print(type a[])
{
    for(int i=0;i<max;i++)
        cout << a[i] << " ";
}
template<class type>
void read(type a[])
{
    for(int i=0;i<max;i++)
        cin >> a[i] ;
}
template<class type>
void sort(type a[])
{
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max-i;j++)
        {
            if(a[j]>a[j+1])
                Swap(a[j],a[j+1]);
        }
    }
}
int main()
{
    char array[max];
    cout << "Enter char array" << endl;
    read(array);
    cout << "Sorted array is " << endl;
    sort(array);
    print(array);
    int array2[max];
    cout << "Enter int array" << endl;
    read(array2);
    cout << "Sorted array is " << endl;
    sort(array2);
    print(array2);

}
