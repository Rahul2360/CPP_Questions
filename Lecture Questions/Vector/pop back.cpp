#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    int sum=0;
    a.push_back(100);
    a.push_back(200);
    a.push_back(300);
    while(!a.empty())
    {
        sum+=a.back();
        a.pop_back();
    }
    cout << "Sum is=" << sum;
}

