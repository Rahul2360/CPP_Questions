/*Given the following inheritance structure of classes that represents the student details,
marks in 3 subjects and Result respectively, generate the sample output.
Student --> Marks --> Result
Sample Input:
12
Raam
12
34
56
Sample Output:
12
Raam
102*/
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main() {
    int rno,i;
    char name[20];
    int marks[3];
    cin>>rno;
    cin>>name;
    for(i=0;i<3;i++)
        {
        cin>>marks[i];

    }
    Result r(rno,name,marks);
    return 0;
}
