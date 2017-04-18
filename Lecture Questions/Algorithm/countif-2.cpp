#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool odd(int i)
{
    return ((i%2)==1);
}
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++)
        v.push_back(i);
    int c;
    c = count_if(v.begin(),v.end(),odd);
    cout << "Odd count " << c;
}

