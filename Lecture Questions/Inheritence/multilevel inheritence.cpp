#include<iostream>
using namespace std;
class student
{
    int rollno;
    char course[20];
public:
    void get_data()
    {
        cout << "Enter roll number";
        cin >> rollno;
        cout << "Enter course of student" << endl;
        cin.ignore();
        cin.getline(course,20);
    }
    int get_rno()
    {
        return rollno;
    }
    char *get_course()
    {
        return course;
    }
};
class result:public student
{
protected:
    int marks[3];
public:
    void get_marks()
    {
        for(int i=0;i<3;i++)
            cin >> marks[i];
    }
    int total()
    {
        int tot=0;
        for(int i=0;i<3;i++)
            tot+=marks[i];
        return tot;
    }
};
class display:public result
{
public:
    void output()
    {
        cout << get_rno() << endl;
        cout << get_course() << endl;
        cout << total() << endl;
    }
};
int main()
{
    display ob;
    ob.get_data();
    ob.get_marks();
    ob.output();
}
