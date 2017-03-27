/*We want to use class Result that has been derived from student class in protected mode.
The base class (student) will contain the information: roll no and course of student.
The derived class(result) contains the marks of three subjects and calculate the total of
marks﴾sum of all the three subjects﴿
Sample Input:
23 //Roll No
CSE //course of student
34 //marks of subject1
45 //marks of subject2
56 //marks of subject3
Sample Output:
23
CSE
135 //total marks of all the three subjects*/
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
class student
{
int roll_no;
protected:
char course[10];
public:
student(int rno,char *c)
{
roll_no=rno;
strcpy(course, c);
}
void show_rno();

};
class result: protected student


int main()
{
int rno,m1,m2,m3;
char course[10];
cin>>rno;
cin.ignore();
cin.getline(course,10);
cin>>m1>>m2>>m3;
result r(rno,course,m1,m2,m3);
r.display();
return 0;
}
