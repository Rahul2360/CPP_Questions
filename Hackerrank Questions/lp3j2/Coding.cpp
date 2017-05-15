/*A class Student has data members rollno and name and a member function get﴾﴿ to obtain these values. Classes Internal and
External are derived from the Student class.class Internal maintains the marks in four subjects and uses a member function get﴾﴿
to obtain these values. class external is used to maintain the marks of four activities the student has participated in and uses
member function getmarks﴾﴿ to obtain these values.Another class Complete_info computes and displays the total marks
obtained.
Sample Input
Ayush //name
666 //rollno
80 70 83 76 //marks in subjects
90 89 76 85 //marks in activities
sample output
Ayush //name
666 //rollno
649 //total mark*/
#include<iostream>
using namespace std;
class Student
{
    char name[30];
    int rollno;
public:
    virtual void get()=0;
};
class Internal:virtual public Student
{
public:
    int marks[4];
    void get(){
        for(int i=0;i<4;i++)
            cin >> marks[i];
    }
};
class External:virtual public Student
{
public:
    int m[4];
    void getmarks(){
        for(int i=0;i<4;i++)
            cin >> m[i];
    }
};
class Complete_Info:public Internal,public External
{
    int total_marks=0;
    char name[30];
    int rollno;
    public:
        Complete_Info()
        {
            cin.getline(name,30);
            cin >> rollno;
        }
    void getmarks(){
            External::getmarks();
    }
    void total(){
        for(int i=0;i<4;i++)
        total_marks+=marks[i] + m[i];
    }
    void display(){
        cout << name << endl;
        cout << rollno << endl;
        cout << total_marks << endl;
    }
};
int main()
{
    Student *bptr;
    Complete_Info c;
    bptr=&c;
    bptr->get();
    c.getmarks();
    c.total();
    c.display();
    return 0 ;
}
