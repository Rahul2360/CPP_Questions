#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v(8,10);
    fill_n(v.begin(),4,20);
    fill_n(v.begin()+3,3,33);
    cout << "Vector contains" << endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout << *it << " ";
}
