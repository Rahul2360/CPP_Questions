#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<int>mylist;
    list<int>::iterator it;
    for(int i=0;i<=5;i++)
    {
        mylist.push_back(i);
    }
    it=mylist.begin();
    it++;
    mylist.insert(it,10);
    mylist.insert(it,2,20);
    it--;
    vector<int>myvector(2,30);
    mylist.insert(it,myvector.begin(),myvector.end());
    cout << "List Contains" << endl;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout << *it << " ";
    }
}
