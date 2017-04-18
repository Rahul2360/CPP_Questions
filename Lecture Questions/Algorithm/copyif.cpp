#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool example(int n)
{
    return ((n%2)==0);
}
int main()
{
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    vector<int>v2(3);
    copy_if(v1.begin(),v1.end(),v2.begin(),example);
    cout << "Vector 2 contains " << endl;
    for(vector<int>::iterator it=v2.begin();it!=v2.end();it++)
        cout << *it << " ";
}


