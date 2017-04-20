#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool fun(int i,int j)
{
    return(i==j);
}
int main()
{
    int a[]={10,20,20,30,10,30,20};
    vector<int>v(7);
    vector<int>::iterator it;
    sort(a,a+7);
    it=unique_copy(a,a+7,v.begin(),fun);
   // v.erase(it,v.end());
    v.resize(distance(v.begin(),it));
    cout << "Vector contains" << endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout << *it << " " ;
}

