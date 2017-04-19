#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    for(int i=0;i<10;i++)
        s.insert(i*10);
    it = s.begin();
    ++it;
    s.erase(it);
    s.erase(40);
    it=s.find(60);
    s.erase(it,s.end());
    cout << "Set contains\n";
    for(it=s.begin();it!=s.end();it++)
        cout << *it << " ";
}
