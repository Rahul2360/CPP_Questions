/*Create a class Employee inherited by two classes-contract class which describes the salary in terms of num_hrs
and wages_perhr and permanent class which describes salary as addition of basic salary,DA,TA,HRA.

Sample Input:
1234                                        //Employee iD of contract
Anjani Kumar                     //Name
Assistant Professor         //Designation
30                                           //Number of hours
1000                                       //Wages per hour
5678                                       //Employee Id of permanent
Kamesh Bathla                  //Name
Senoir manager                                //Designation
12000                                    //basic pay
30000                                    //HRA
40000                                    //TA

Sample Output:
EMP ID: 1234
NAME: Anjani Kumar
DESIGNATION: Assistant Professor
NUMBER OF HOURS WORKED: 30
WAGES PER HOUR: 1000
SALARY: 30000
EMP ID: 5678
NAME: Kamesh Bathla
DESIGNATION: Senior Manager
SALARY (BASIC+HRA+TA+DA): 95200*/
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
#include <iostream>
using namespace std;
class Employee
{
    protected:
        int id;
        char name[20];
        char desig[20];
    public:
        void get_Emp_data();
        void show_Emp_data();
};
class Contract:public Employee
{
    protected:
        int num_hrs;
        float wages_perhr;
    public:
    void get_Cont_data();
    void show_Cont_data();
};
class Permanent:public Employee
{
    protected:
        float basic,TA,DA,HRA;
    public:
        void get_Per_data();
        float cal_salary();
        void show_Per_data();
};
void Employee::get_Emp_data(){

    cin >> id;
    cin.ignore();
    cin.getline(name,20);
    cin.getline(desig,20);
}
void Employee::show_Emp_data(){
    cout << "EMP ID: " << id << endl;
    cout << "NAME : " << name << endl;
    cout << "DESIGNATION : " << desig << endl;
}
void Contract::get_Cont_data(){
    Employee::get_Emp_data();
    cin >> num_hrs;
    cin >> wages_perhr;
}
void Contract::show_Cont_data(){
    Employee::show_Emp_data();
    cout << "NUMBER OF HOURS WORKED : " << num_hrs << endl;
    cout << "WAGES PER HOUR : " << wages_perhr << endl;
    cout << "SALARY : " <<  num_hrs*wages_perhr << endl;
}
void Permanent::get_Per_data(){
    Employee::get_Emp_data();
    cin >> basic;
    cin >> HRA;
    cin >> TA;
}
void Permanent::show_Per_data(){
    Employee::show_Emp_data();
    cout << "SALARY (BASIC+HRA+TA+DA) : " << basic+HRA+TA+((1.1)*basic) << endl;
}
int main() {
    Contract C;
    C.get_Cont_data();
    C.show_Cont_data();
    Permanent P;
    P.get_Per_data();
    P.show_Per_data();
	return 0;
}

