#include<iostream>
using namespace std;
class person
{
private:
    char name[20];
    long long int contact;
public:
    void read()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter contact" << endl;
        cin >> contact;
    }
    void show()
    {
        cout << "Name entered is " << name << endl << "Contact is " << contact << endl;
    }
};
class student:public person
{
    int rollno;
    char course[10];
public:
    void read()
    {
        person::read();
        //read();
        cout << "Enter roll number" << endl;
        cin >> rollno;
        cout << "Enter course" << endl;
        cin >> course;
    }
    void show()
    {
        // if function name are same then we can use person::show() i.e. void show()
        //show();
        person::show();
        cout << "Roll number entered is " << rollno << endl << "Course is " << course << endl;
    }
};
class teacher:public person
{
    char dept_name[20];
public:
    void read()
    {
        //read();
        /* read1(); */ // this gives error;
        cout << "Enter dept name" << endl;
        cin.ignore(); //clear the buffer space which is already used
        cin.getline(dept_name,20);
    }
    void show()
    {
        cout << "Dept name is " << dept_name << endl;
    }
};
int main()
{
    student ob;
    ob.read();
    ob.show();
    teacher ob2;
    ob2.read();
    ob2.show();
}

