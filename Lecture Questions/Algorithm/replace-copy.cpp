#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a[]={10,20,30,20,10,20};
    vector<int>v(6);
    replace_copy(a,a+6,v.begin(),10,80);
    cout << "Vector contains" << endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout << *it << " " ;
}
