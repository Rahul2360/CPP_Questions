#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vect;
    int num;
    cout << "Enter the elements of vector";
    for(int i=0;i<5;i++)
    {
        cin >> num;
        vect.push_back(num);
    }
    cout << "Elements of vector" << endl;
    vector<int>::iterator itr;
    itr = vect.begin();
    vect.insert(itr + 4,1,25);
    vect.erase(vect.begin()+1);
    cout << "After editing vector" << endl;
    for(int i=0;i<vect.size();i++)
        cout << vect[i] << " ";
}
