#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<int>l;
    for(int i=0;i<10;i++)
    {
        l.push_back(i);
    }
    l.reverse();
    cout << "List contains" << endl;
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout << *it << " " ;
    }
}
