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
    void get_person_data();
    void show_person_data();
};
class student:public person
{
protected:
    int rollno;
    char course[10];
public:
    void get_student_data();
    void show_student_data();
};
class faculty:public person
{
protected:
    char dept[20];
    char design[20];
public:
    void get_faculty_data();
    void show_faculty_data();
};
class publication:public faculty
{
    int no_article;
    int no_books;
    int no_research;
public:
    void get_data();
    void show_data();
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

