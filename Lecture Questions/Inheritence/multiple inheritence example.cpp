#include<iostream>
using namespace std;
class student
{
    int roll_no;
public:
    void input()
    {
        cout << "Enter roll number" << endl;
        cin >> roll_no;
    }
    void output()
    {
        cout << "Roll number=" << roll_no << endl;
    }
};
class marks
{
    float avg;
    int marks[5];
public:
    void input()
    {
        for(int i=0;i<5;i++)
            cin >> marks[i];
    }
    void output()
    {
        int tot_marks=0;
        for(int i=0;i<5;i++)
            tot_marks+=marks[i];
        avg=(float)tot_marks/5;
        cout << avg << endl;
    }
};
class result:public student ,public marks
{
public:
    void input()
    {
        student::input();
        marks::input();
    }
    void output()
    {
        student::output();
        marks::output();
    }
};
int main()
{
    result ob;

}
