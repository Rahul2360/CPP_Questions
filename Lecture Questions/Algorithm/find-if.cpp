#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool check(int n)
{
    return (n%2==0);
}
int main()
{
    int a[]={10,2,3,4,5};
    vector<int>v(a,a+5);
    vector<int>::iterator it;
    it=find_if(v.begin(),v.end(),check);
    if(it!=v.end())
        cout << "First even number is " << *it << endl;
    v.clear();
    v.push_back(1);
    it=find_if(v.begin(),v.end(),check);
    if(it==v.end())
        cout << "Only odd elements are present" << endl;
    else
        cout << "Even number is " << *it << endl;
}
