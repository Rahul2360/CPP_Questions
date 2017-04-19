#include<iostream>
#include<set>
using namespace std;
int main()
{
    int a[]={5,10,9,8,7};
    set<int>s(a,a+5);
    cout << "Set contains\n";
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
        cout << *it << " ";
}
