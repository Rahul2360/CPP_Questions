/*Joey wants to measure the area of props that he uses while playing his favourite games. Specifically, he enjoys playing Snakes and Ladders, and Beach Soccer. In Snakes and Ladders, he wants to measure the area of dice used and similarly in Beach Soccer, he wants to know the area of football used.
Area of dice=6*side*side
Area of football=4*pi*radius*radius
Sample Input
2
6
Sample Output
Area of dice used = 24
Area of Football used = 452.39
*/
#include<iostream>
#include<iomanip>
#define pi 3.1416
using namespace std;
class Games
{
       public:
       double x;
       public:
        void get_data(double a);
     virtual void display_area(){}
};
void Games::get_data(double a)
{
        x=a;
}

class Snakes_Ladders:public Games
{
    public:
    void display_area(){
        cout << "Area of dice used = " <<  6*x*x << endl;
    }
};
class Beach_Soccer:public Games
{
    public:
    void display_area(){
        cout << "Area of Football used = " << 4*pi*x*x << endl;
    }
};
int main()
{

        Games *s[2];
        Snakes_Ladders r;
        s[0]=&r;
        Beach_Soccer c;
          s[1]=&c;
          double x;
           cin>>x;
           s[0]->get_data(x);
           double rd;
           cin>>rd;
           s[1]->get_data(rd);
           s[0]->display_area();
           s[1]->display_area();
          return 0;
}
