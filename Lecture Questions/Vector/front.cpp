#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    v1.push_back(20);
    v1.push_back(5);
    v1.front()-=v1.back();
    cout << "Front element is=" << v1.front();
}

