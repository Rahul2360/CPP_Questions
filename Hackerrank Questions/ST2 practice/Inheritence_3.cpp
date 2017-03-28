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
#include <numeric>
#include <iostream>
#include <algorithm>
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
basicInfo::basicInfo(char *n,int e,char g){
    name = n;
    empId = e;
    gender = g;
}
deptInfo::deptInfo(char *dn,char *a ,int t){
    deptName = dn;
    assignedWork = a;
    time2complete = t;
}
class employee:public basicInfo,public deptInfo
{
    public:
    employee(char *n,int e,char g,char *dn,char *a,int t):basicInfo(n,e,g),deptInfo(dn,a,t){

    }
    void printEmployeeInfo(){
        cout << name << endl;
        cout << empId << endl;
        cout << gender << endl;
        cout << deptName << endl;
        cout << assignedWork << endl;
        cout << (float)time2complete/10 << endl;
    }
};
int main()
{
    char n[100],dn[100],a[100],g;
    int e,t;
    cin.getline(n,100);
    cin >> e >> g;
    basicInfo ob1(n,e,g);
    cin.ignore();
    cin.getline(dn,100);
    cin.getline(a,100);
    cin >> t;
    if(t>0);
    else{
        cout << "Wrong Input";
        exit(0) ;}
    deptInfo ob2(dn,a,t);
    employee em(n,e,g,dn,a,t);
    employee *emp;
    emp = &em;
emp->printEmployeeInfo();
return 0;
}
