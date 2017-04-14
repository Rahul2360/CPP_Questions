#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    int myints[]={27,10,11,23};
    list<int>mylist(myints,myints+4);
    mylist.remove(10);
    cout << "List contains" << endl;
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout << *it << " " << endl;
    }
}
