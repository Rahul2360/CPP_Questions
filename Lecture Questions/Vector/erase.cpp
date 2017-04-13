#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<10;i++)
        v.push_back(i);
    v.erase(v.begin()+5);
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    v.erase(v.begin(),v.begin()+3);
    cout << "Elements are";
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    /*or
    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
        cout << *itr;
    */
}

