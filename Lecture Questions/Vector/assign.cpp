#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>first;
    vector<int>second;
    vector<int>third;
    first.assign(7,100);
    vector<int>::iterator itr;
    itr = first.begin() + 1;
    second.assign(itr,first.end()-1);
    int array[] = {4,5,6};
    third.assign(array,array+3);
    cout << "Size of first v=" <<first.size() << endl;
    cout << "Size of second v=" <<second.size() << endl;
    cout << "Size of third v=" <<third.size() << endl;
}
