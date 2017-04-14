#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<int>mylist;
    list<int>::iterator it1,it2;
    for(int i=1;i<10;i++)
    {
        mylist.push_back(i*10);
    }
    it1=it2=mylist.begin();
    advance(it2,6);
    it1++;
    it1=mylist.erase(it1);
    it2=mylist.erase(it2);
    ++it1;
    --it2;
    mylist.erase(it1,it2);
    cout << "List contains" << endl;
    for(it1=mylist.begin();it1!=mylist.end();it1++)
    {
        cout << *it1 << " " ;
    }
}
