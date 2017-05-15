/*Create a class Shape inherited by two classes Sphere and Hemisphere. Shape class consists of virtual function.
A class Loader is responsible for loading all the calculations in respective classes. Using these three classes,
design a program that will accept dimensions of a Sphere and Hemisphere respectively and display the volumes respectively.
Sample Input:
3//radius
3//radius
Sample Output:
113.04//volume of Sphere
6.28// volume of Hemisphere
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
class Shape
{
    protected:
       float r;
    public:
    void get()  ;
    virtual void calculatevolume()=0;

};

class Sphere : public Shape
{
    public:
   void calculatevolume();

};

class Hemisphere : public Shape
{
    public:
       void calculatevolume();

};
class Loader
{
   public:
     void loadFeatures(Shape*);
};
void Shape::get()
{
    cin >> r;
}
void Sphere::calculatevolume()
{
    cout << (4*3.14*r*r*r)/3 << endl;
}
void Hemisphere::calculatevolume()
{
    cout << (2*3.14*r*r*r)/3 << endl;
}
void Loader::loadFeatures(Shape *a)
{
    a->get();
    a->calculatevolume();
}
int main()
{
    Loader *l = new Loader;
    Shape *s;
    Sphere  sq;
    Hemisphere c;
    s=&sq;
    l->loadFeatures(s);
    s=&c;
    l->loadFeatures(s);
    return 0;
}

