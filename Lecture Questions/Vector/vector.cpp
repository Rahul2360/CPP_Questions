#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(33);
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    if(!v.empty())
        v.clear();
    vector<int>p;
    p.push_back(10);
    v.push_back(10);
    if(p==v)
        v.push_back(20);
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
}
