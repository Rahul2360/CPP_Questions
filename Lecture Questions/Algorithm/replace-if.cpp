#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool odd(int i)
{
    return((i%2)==1);
}
int main()
{
    vector<int>v;
    for(int i=1;i<9;i++)
        v.push_back(i);
    replace_if(v.begin(),v.end(),odd,0);
    cout << "Vector contains" << endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout << *it << " " ;
}
