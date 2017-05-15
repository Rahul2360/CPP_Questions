/*Given a class hierarchy in following form
Person
|
Student
|
Exam
Person is base class of Student ,Student is base class of Exam class. The specification of classes have been given below.
Person
char name[100]
char gender
Method 1:void ReadData();
Method 2: void DisplayData();

Student
int rollno
char branch[20]
Method1 : void ReadData();
Method2 : void DisplayData();

Exam
int marks[3]
int total
Method1:void ReadData()
Method2 :void DisplayData(Exam[],int) //Will display Name,Gender,Rollno,Branch and total of marks of each student.

Complete the given source code.
Sample Input
3
Raj
M
90
CSE
100
100
100
David
M
91
CSE
90
100
50
John
M
92
ECE
92
50
50

Sample output
Raj M  90 CSE 300
David M  91 CSE 240
John M  92 ECE 192

Explanation: In sample input 3 stands for number of testcases. Raj is the name of the student,M stands for Male ,90 is the Rollno of the student,CSE is Branch of student and then marks of three subjects have been entered.
In sample output the record of students with total of marks have been displayed.*/
#include<iostream>
using namespace std;
class Person
{
protected:
    char name[100];
    char gender;
public:
    void ReadData();
    void DisplayData();
};
class Student:public Person
{
protected:
    int rollno;
    char branch[20];
public:
    void ReadData();
    void DisplayData();
};
class Exam:public Student
{
protected:
    int marks[3];
    int total;
public:
    Exam();
    void ReadData();
    void DisplayData(Exam[],int);
};
Exam::Exam(){}
void Person::ReadData()
{
    cin >> name;
    cin >> gender;
}
void Person::DisplayData()
{
    cout << name << " ";
    cout << gender << " ";
}
void Student::ReadData()
{
    cin >> rollno;
    cin >> branch;
}
void Student::DisplayData()
{
    cout << rollno << " ";
    cout << branch << " ";
}
void Exam::ReadData()
{
    Person::ReadData();
    Student::ReadData();
    total=0;
    for(int i=0;i<3;i++)
        cin >> marks[i];
    for(int i=0;i<3;i++)
        total+=marks[i];
}
void Exam::DisplayData(Exam a[],int n)
{
    for(int i=0;i<n;i++){
        a[i].Person::DisplayData();
        a[i].Student::DisplayData();
    cout << a[i].total << endl;}
}
int main()
{
    int n;
    cin>>n;
    Exam objannual[100];
    for(int i=0;i<n;i++)
    {
    objannual[i].ReadData();
    }
    objannual[0].DisplayData(objannual,n);
    return 0;
}
