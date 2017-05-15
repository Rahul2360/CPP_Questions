/*A company markets both printed books and audio-visual lecture. A class media stores the price and title. class book derived from the
class media stores the number of  pages of the book and class tape stores the time for which the audio-visual lecture plays.
Complete the code that follows.*/
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
class media{
    protected:
        char title[20];
        float price;
    public:
        virtual void display()=0;
        media(char *s,float a)
        {}
};
class book:public media
{
    int page;
    public:
    book(char *s,float a,int p):media(s,a){
        strcpy(title,s);
        price = a;
        page=p;
    }
    void display(){
        cout << "for book" << endl;
        cout << title << endl;
        cout << price << endl;
        cout << page << endl;
    }
};
class tape:public media
{
    int time;
    public:
    tape(char *s,float a,int t):media(s,a){
        strcpy(title,s);
        price = a;
        time=t;
    }
    void display(){
        cout << "for tape" << endl;
        cout << title << endl;
        cout << price << endl;
        cout << time << endl;
    }
};
int main()
{
    char title[20];
    float price;
    int page,time;
    cin.getline(title,20);
    cin >> price >> page;
    book b(title,price,page);
    cin.ignore();
    cin.getline(title,20);
    cin >> price >> time;
    tape t(title,price,time);
    media *p1,*p2;
    p1=&b;
    p2=&t;
    p1->display();
    p2->display();
    return 0;
}

