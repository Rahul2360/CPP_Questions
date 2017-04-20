#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int a[]={1,2,3,4,5,6,7,8,9};
    v.resize(9);
    reverse_copy(a,a+9,v.begin());
    cout << "Vector contains" << endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout << *it << " " ;
}

