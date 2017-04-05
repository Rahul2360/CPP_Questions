/*There are three classes, your work is to display according to the choice option 1 is for ﴾address+room﴿ details, option 2 is
for﴾house+room﴿ details for only 3 rooms not more or less than that.
Class room: Data members are Length, Breadth, Height
Class address: Data members are HouseNo, City, State
Class house: Data member is HouseName
Sample Input:
For option 1: Address & Room details
//Order is HouseNo, City, State
112
Panipat
Haryana
//1st Room details: Order is Length, Breadth, Height
11
12
13
//2nd Room details: Order is Length, Breadth, Height
21
22
23
//3rd Room details: Order is Length, Breadth, Height
31
32
33
State=Haryana
Address is:
Room Details=1
Length=11
Breath=12
Height=13
Room Details=2
Length=21
Breath=22
Height=23
Room Details=3
Length=31
Breath=32
Height=33
For option 2: House & Room details
//HouseName
Yellow House
//1st Room details: Order is Length, Breadth, Height
11
12
13
//2nd Room details: Order is Length, Breadth, Height
21
22
23
//3rd Room details: Order is Length, Breadth, Height
31
32
House name=Yellow House
Address is:
Room Details=1
Length=11
Breath=12
Height=13
Room Details=2
Length=21
Breath=22
Height=23
Room Details=3
Length=31
Breath=32
Height=33*/
#include <iostream>
using namespace std;
class room
{
    int Length[3],Breadth[3],Height[3];
    public:
    void get_data(){
        for(int i=0;i<3;i++)
            cin >> Length[i] >> Breadth[i] >> Height[i];
    }
    void show_data(){
        for(int i=0;i<3;i++){
            cout << "Room Details=" << i+1 << endl;
            cout << "Length=" << Length[i] << endl;
            cout << "Breath=" << Breadth[i] << endl;
            cout << "Height=" << Height[i] << endl;
        }
    }

};
class address:public room
{
    int HouseNo;
    char City[100],State[100];
    public:
    void input(){
        cin >> HouseNo;
        cin.ignore();
        cin.getline(City,100);
        cin.getline(State,100);
        get_data();
    }
    void display(){
        cout << "House No=" << HouseNo << endl;
        cout << "City=" << City << endl;
        cout << "State=" << State << endl;
        cout << "Address is:" << endl;
        show_data();
    }
};
class house:public room
{
    char HouseName[100];
    public:
    void input(){
        cin.ignore();
        cin.getline(HouseName,100);
        get_data();
    }
    void display(){
        cout << "House name=" << HouseName << endl;
        cout << "Address is:" << endl;
        show_data();
    }
};

int main()
{
    int option;
    //cout<<"enter 1 for (address+room) and 2 for (house+room)"<<endl;
     cin>>option;
     if(option==1)
     {
	address a;
	a.input();
	a.display();
     }
     if(option==2)
     {
         house h;
         h.input();
         h.display();
     }
	return 0;
}
