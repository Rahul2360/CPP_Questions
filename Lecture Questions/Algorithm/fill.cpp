#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> v(8);
    fill(v.begin(),v.begin()+4,5);
    fill(v.begin()+3,v.end()-2,8);
    cout << "Vector contains" << endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout << *it << " ";
}


