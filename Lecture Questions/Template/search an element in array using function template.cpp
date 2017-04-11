#include<iostream>
using namespace std;
#define max 10
template<class type>
void read(type a[],int num)
{
    for(int i=0;i<max;i++)
        cin >> a[i] ;

}
template<class type>
void Search(type a[],int num)
{
    for(int i=0;i<max;i++)
        if(a[i]==num)
            cout << i;
}
int main()
{
    char array[max];
    char num;
    cout << "Enter the element" << endl;
    cin >> num;
    cout << "Enter char array" << endl;
    read(array,num);
    Search(array,num);
}
