#include<iostream>
using namespace std;
class student
{
    int roll_no;
protected:
    char course[10];
public:
    void get_rno()
    {
        cout << "Enter the roll number";
        cin >> roll_no;
    }
    void show_rno()
    {
        cout << "Roll number is " << roll_no << endl;
    }
};
class result:public student
{
    int marks[3];
public:
    void get_data();
    int total();
    void display();
};
void result::get_data()
{
    cout << "Enter the course" << endl;
    cin.ignore();
    cin.getline(course,10);
    for(int i=0;i<3;i++)
        cin >> marks[i];
}
int result::total()
{
    int tot=0;
    for(int i=0;i<3;i++)
        tot+=marks[i];
    return tot;
}
void result::display()
{
    show_rno();
    cout << "course of the student is" << course << endl;
    cout << "Total marks=" << total() << endl;
}
int main()
{
    result ob;
    ob.get_rno();
    ob.get_data();
    ob.display();
}
