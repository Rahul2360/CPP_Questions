#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1(3,100);
    vector<int>v2(5,200);
    swap(v1,v2);
    cout << "V1 contains" << endl;
    for(int i=0;i<v1.size();i++)
        cout << v1[i] << " ";
    cout << "v2 contains" << endl;
    for(int i=0;i<v2.size();i++)
        cout << v2[i] << " ";
}
