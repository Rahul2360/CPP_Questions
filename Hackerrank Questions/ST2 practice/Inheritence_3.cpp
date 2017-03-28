/*Write a program to enter basic information﴾name,empId,gender﴿ and department
information﴾dept name,assigned work,timetaken﴿ for an employee and print the entire
information using classes basicInfo, deptInfo and employee classes.For Wrong values print
"Wrong Input".
Constraint:
timetaken can't be zero or negative.
Sample Input:
rahul //name
101 //empID
m //gender
cse //dept name
dl //assigned work
45 //timetaken
Sample Output:
rahul
101
m
cse
dl
4.5*/
#include <string>
#include <iostream>
#include <math>
using namespace std;
class basicInfo
{
    protected:
        char    *name;
        int     empId;
        char    gender;
    public:
        basicInfo(char *n,int e,char g);
};
class deptInfo
{
    protected:
        char    *deptName;
        char    *assignedWork;
        int     time2complete;
    public:
        deptInfo(char *n,char *a,int t);
};


emp->printEmployeeInfo();
return 0;
}
