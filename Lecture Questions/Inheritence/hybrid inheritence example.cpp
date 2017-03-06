// write a program that implement hybrid inheritance
#include<iostream>
using namespace std;
class person
{
protected:
    char name[20];
    int age;
    char gender;
public:
    void get_person_data()
    {
        cout << "Enter name" << endl;
        cin.ignore();
        cin.getline(name,20);
        cout << "Enter age" << endl;
        cin >> age ;
        cout << "Enter gender" << endl;
        cin >> gender;
    }
    void show_person_data()
    {
        cout << "Name is=" << name << endl;
        cout << "Age is=" << age << endl;
        cout << "Gender is=" << gender << endl;
    }
};
class student:public person
{
protected:
    int rollno;
    char course[10];
public:
    void get_student_data()
    {
        get_person_data();
        cout << "Enter roll number" << endl;
        cin.ignore();
        cin >> rollno;
        cout << "Enter course" << endl;
        cin.ignore();
        cin.getline(course,10);
    }
    void show_student_data()
    {
        show_person_data();
        cout << "Roll number is=" <<  rollno << endl;
        cout << "Course is" << course << endl;
    }
};
class faculty:public person
{
protected:
    char dept[20];
    char design[20];
public:
    void get_faculty_data()
    {
        cout << "Enter the dept" << endl;
        cin.ignore();
        cin.getline(dept,20);
        cout << "Enter the design" << endl;
        cin.ignore();
        cin.getline(design,20);
    }
    void show_faculty_data()
    {
        cout << "Dept is" << dept << endl;
        cout << "design is" << design << endl;
    }
};
class publication:public faculty
{
    int no_article;
    int no_books;
    int no_research;
public:
    void get_data()
    {
        get_faculty_data();
        cout << "Enter the number of article" << endl;
        cin >> no_article;
        cout << "Enter the number of books" << endl;
        cin >> no_books;
        cout << "Enter the number of Research" << endl;
        cin >> no_research;
    }
    void show_data()
    {
        show_faculty_data();
        cout << "Article is=" << no_article << endl;
        cout << "Books is=" << no_books << endl;
        cout << "Research is=" << no_research << endl;
    }
};
int main()
{
    student ob;
    ob.get_student_data();
    ob.show_student_data();
    publication ob2;
    ob2.get_data();
    ob2.show_data();
}

