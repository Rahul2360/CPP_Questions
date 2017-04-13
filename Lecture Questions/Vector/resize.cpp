#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<10;i++)
        v.push_back(i);
    cout << "Vector elements are" << endl;
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    v.resize(5);
    cout << "New size=" << v.size() << endl;
    v.resize(8,100);
    cout << "Again after resize=" << v.size() << endl;
    v.resize(12);
    cout << "After resizing" << v.size() << endl;
    cout << "vector elements are " << endl;
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
}
