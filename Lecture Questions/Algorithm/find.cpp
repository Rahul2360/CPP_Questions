#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int val=5;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int>::iterator it;
    it = find(v.begin(),v.end(),val);
    if(it!=v.end())
        cout << val << "is first in vector" << endl;
    val=15;
    it=find(v.begin(),v.end(),val);
    if(it==v.end())
        cout << val << "is not present in vector" << endl;

}
