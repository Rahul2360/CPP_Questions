#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>s;
    multiset<int>::iterator it;
    s.insert(40);
    for(int i=1;i<7;i++)
        s.insert(i*10);
    it=s.begin();
    it++;
    s.erase(it);
    s.erase(40);
    it=s.find(50);
    s.erase(it,s.end());
    cout << "Multiset contains\n";
    for(it=s.begin();it!=s.end();it++)
        cout << *it << " ";
}

