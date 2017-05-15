/*Input an array of integer numbers.Sum the elements of array, if during summing of elements, the running sum becomes zero, it should throw an exception.If excetption is not thrown, it should display final sum of elements.
Sample Input:
7    //no of elements
7    //elements
-7
9
1
3
5
3

Sample Output:
SUM OF ARRAY HAS BECOME ZERO AT 2    //2 is position at which sum becomes zero.

Sample Input:
5
1
2
3
4
5

Sample Output:
15
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class array1
{
    int a[100],num;
  public:
    void sum(){
        cin >> num;
        int s = 0;
        try{
            for(int i=0;i<num;i++)
            {
                cin >> a[i];
            }
            for(int i=0;i<num;i++){
                s = s + a[i];
                if(s == 0)
                    throw i+1;
            }
        }
        catch(int i){
            throw i;
        }
        cout << s;
    }
};
int main() {
     try
    {
    array1 a; //array1 is a class
    a.sum();
    }
    catch(int i)
    {

        cout<<"SUM OF ARRAY HAS BECOME ZERO AT "<<i;
    }
    return 0;
}
