#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    for(int i=0;i<5;i++)
        s.insert(i*3);
    for(int i=0;i<10;i++){
        cout << i;
        if(s.count(i)!=0)
            cout << " is an element of set" << endl;
        else
            cout << " is not an element of set" << endl;
    }
}
