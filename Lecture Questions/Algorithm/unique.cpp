#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[]={10,20,20,30,10,30,20};
    vector<int>v(a,a+7);
    vector<int>::iterator it;
    sort(v.begin(),v.end());
    it=unique(v.begin(),v.end());
    v.erase(it,v.end());
    cout << "Vector contains" << endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout << *it << " " ;
}

