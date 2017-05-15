/*Create three classes Person, Professor and Student. The class Person should have data members name and age. The classes Professor and Student
should inherit from the class Person.
The class Professor should have two integer members: publications and cur_id. There will be two member functions: getdata and putdata.
 The function getdata should get the input from the user: the name, age and publications of the professor. The function putdata should
print the name, age, publications and the cur_id of the professor.
The class Student should have two data members: marks, which is an array of size 6 and cur_id. It has two member functions: getdata
and putdata. The function getdata should get the input from the user: the name, age, and the marks of the student in 6 subjects. The
function putdata should print the name, age, sum of the marks and the cur_id of the student.
For each object being created of the Professor or the Student class, sequential id's should be assigned to them starting from 1.
Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.
Sample Input

4
1
Walter 56 99
2
Jesse 18 50 48 97 76 34 98
2
Pinkman 22 10 12 0 18 45 50
1
White 58 87

Sample Output

Walter 56 99 1
Jesse 18 403 1
Pinkman 22 135 2
White 58 87 2

In the Sample Input
There are two types of input. If the object being created is of the Professor class, you will have to input the name, age and
publications of the professor.
If the object is of the Student class, you will have to input the name, age and the marks of the student in  6 subjects.

In the Sample output
There are two types of output depending on the object.If the object is of type Professor, print the space separated name, age,
publications and id on a new line.If the object is of the Student class, print the space separated name, age, the sum of the marks in 6 subjects
 and id on a new line.
*/
#include<iostream>
#include <string>
using namespace std;
int professor_id=0;
int student_id=0;
class Person{
public:
    string name;
    int age,score,id;
    virtual void putdata()=0;
    virtual void getdata()=0;
};
class Professor:public Person
{
    int publications,cur_id=0;
    public:
    void getdata(){
        cin >> name;
        cin >> age;
        cin >> publications;
    }
    void putdata(){
        cout << name << " ";
        cout << age << " ";
        cout << publications << " ";
        professor_id++;
        cout << professor_id;
        cout << endl;
    }
};
class Student:public Person
{
    int marks[6],cur_id=0,sum=0;
    public:
    void getdata(){
        cin >> name;
        cin >> age;
        for(int i=0;i<6;i++)
            cin >> marks[i];
        for(int i=0;i<6;i++)
            sum+=marks[i];
    }
    void putdata(){
        cout << name << " ";
        cout << age << " ";
        cout << sum << " ";
        student_id++;
        cout << student_id ;
        cout << endl;
    }
};
int main()
{
    int n, val;
    cin>>n;
    Person *per[n];
    for(int i = 0;i < n;i++)
    {
        cin>>val;
        if(val == 1)
        {
            per[i] = new Professor;
        }
        else per[i] = new Student;
            per[i]->getdata();
    }
    for(int i=0;i<n;i++)
        per[i]->putdata();
    return 0;
}
