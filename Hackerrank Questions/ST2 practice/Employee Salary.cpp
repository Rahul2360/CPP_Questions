/*Implement a class employee that inherits two classes-(1) contract and (2) permanent.
The base class employee contains the information of employee as: employee ID,name of the employee,designation of the
employee.
Derived class1 (contract﴿ contains information: no of working hours of employees, no of wages per hour and displays the salary
of employee as the product of no of working hours and no of wages per hour
Derived class2(permanent) contains information: basic pay, HRA, TA and calculate its DA ﴾10% of the basic salary﴿, and displays
the calculated salary﴾sum of basic,HRA,TA,DA﴿.
Sample Input:
12 //employee ID
Priyanka //employee name
Assistant Professor //Designation of employee
12 //no of working hours
2000 //wages per hour
20000 //basic salary
800 //HRA
400 //TA
Sample Output:
12
Priyanka
Assistant Professor
24000 //salary of employee
43200 //calculated salary*/
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
class employee
{
protected:
int id;
char name[20];
char des[20];
public:
void get_emp_data();
void show_emp_data();
};
void employee::get_emp_data(){
    cin >> id;
    cin.ignore();
    cin.getline(name,20);
    cin.getline(des,20);
}
void employee::show_emp_data(){
    cout << id << endl;
    cout << name << endl;
    cout << des << endl;
}
class contract:public employee{
    int working_hours,no_of_wages,salary;
    public:
    void get_cont_data(){
        get_emp_data();
        cin >> working_hours >> no_of_wages;
        salary = working_hours*no_of_wages;
    }
    void show_cont_data(){
        show_emp_data();
        cout << salary << endl;
    }
};
class permanent:public employee{
    float HRA,TA,basic_pay,DA,total;
    public:
    void get_per_data(){
        cin >> basic_pay >> HRA >> TA;
        DA = 0.1*basic_pay;
        total = basic_pay+basic_pay+ HRA + TA + DA ;
    }
    void show_per_data(){
        cout << total;
    }
};
int main()
{
contract c;
c.get_cont_data();
permanent p;
p.get_per_data();
c.show_cont_data();
p.show_per_data();
return 0;
}
