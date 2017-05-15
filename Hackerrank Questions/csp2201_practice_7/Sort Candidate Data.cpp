/*Given a class hierarchy in which Parent is base class of Student ,Student is base class of Exam class.
Person contain data members as:
char name[100], char gender, int age.
Member functions as
void ReadData();
void DisplayData();
Student contain data members as:
int rollno, char branch[20]
Member functions as :
void ReadData();
void DisplayData();
Exam contain data members as:
int marks[3], int total;
Member functions as :
void ReadData();
void DisplayData(Exam[],int) //Will display sorted record of n students.
void SortMarksWise(Exam[],int); //Will sort data according to total of two subjects in descending order.

//Name has been entered without space.
Sample Input
3
RajKumar //Name
M //gender
24 //age
90 //rollno
CSE //branch
100 //marks of 1st subject
100 //marks of 2nd subject
100 //marks of 3rd subject
David
M
22
91
CSE
90
100
50
JohnDavid
M
24
92
ECE
92
50
50
Sample output
RajKumar M 24 90 CSE 300
David M 22 91 CSE 240
JohnDavid M 24 92 ECE 192*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Person
{
protected:
    char name[100];
    char gender;
    int age;
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
    void SortMarksWise(Exam[],int);
    void DisplayData(Exam[],int);
};
void Person::ReadData()
{
    cin >> name ;
    cin >> gender;
    cin >> age;
}
void Person::DisplayData()
{
    cout << name << " ";
    cout << gender << " ";
    cout << age << " ";
}
void Student::ReadData()
{
    cin >> rollno ;
    cin >> branch;
}
void Student::DisplayData()
{
    cout << rollno << " ";
    cout << branch << " ";
}
Exam::Exam()
{

}
void Exam::ReadData()
{
    total= 0;
    Person::ReadData();
    Student::ReadData();
    for(int i=0;i<3;i++){
        cin >> marks[i] ;
        total+=marks[i];
    }
}
void Exam::SortMarksWise(Exam a[],int b)
{
    for(int i=0;i<b;i++){
        for(int j=0;j<b-i-1;i++){
            if(a[j].total<a[j+1].total){
                int temp;
                temp = a[j].total;
                a[j].total = a[j+1].total;
                a[j+1].total=temp;
                char temp1[100];
                strcpy(temp1,a[j].name);
                strcpy(a[j].name,a[j+1].name);
                strcpy(a[j+1].name,temp1);
                char temp2;
                temp2 = a[j].gender;
                a[j].gender = a[j+1].gender;
                a[j+1].gender=temp2;
                int temp3;;
                temp3 = a[j].age;
                a[j].age = a[j+1].age;
                a[j+1].age=temp3;
                int temp4;
                temp4 = a[j].rollno;
                a[j].rollno = a[j+1].rollno;
                a[j+1].rollno=temp4;
                char temp5[20];
                strcpy(temp5,a[j].branch);
                strcpy(a[j].branch,a[j+1].branch);
                strcpy(a[j+1].branch,temp5);
            }}}
}
void Exam::DisplayData(Exam c[],int d)
{
     for(int i=0;i<d;i++){
        c[i].Person::DisplayData();
        c[i].Student::DisplayData();
         cout << c[i].total;
         cout << endl;
     }
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
    objannual[0].SortMarksWise(objannual,n);
    objannual[0].DisplayData(objannual,n);
    return 0;
}


