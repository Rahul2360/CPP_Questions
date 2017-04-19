#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v{3,1,-14,9,5,1};
    vector<int>::iterator result;
    result=max_element(v.begin(),v.end());
    cout << "Max Value is " << *result << endl;
    vector<int>::iterator it;
    it=min_element(v.begin(),v.end());
    cout << "Min Value is " << *it << endl;
}

