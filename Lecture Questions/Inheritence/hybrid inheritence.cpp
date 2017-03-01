#include<iostream>
using namespace std;
class player
{
protected :
    int age;
    char gender[50];
};
class physique:public player
{
protected:
    float height,weight;
};
class location
{
protected:
    char city[20];
    long int pin;
};
class game:public physique ,public location
{
    char game_name[20];
public:
    void getdata()
    {
        cout << "Enter age" << endl;
        cin >> age;
        cout << "Enter gender" << endl;
        cin >> gender;
        cout << "Enter height and weight" << endl;
        cin >> height ;
        cin >> weight;
        cout << "Enter city" << endl;
        cin >> city;
        cout << "Enter pin code"<< endl;
        cin >> pin ;
        cout << "Enter name of game" << endl;
        cin >> game_name;
    }
    void display()
    {
        cout << "Age" << age<< endl << "gender" << gender << endl;
        cout << "Height" << height << endl << "Weight" << weight << endl;
        cout << "city" << city<< endl << "pin " << pin << endl;
        cout << "Game name=" << game_name << endl;
    }
};
int main()
{
    game g;
    g.getdata();
    g.display();
}
