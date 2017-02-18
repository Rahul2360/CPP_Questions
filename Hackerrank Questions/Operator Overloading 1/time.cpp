/*
Create a Mytime class having data member as hour,minute and second.
Mytime class has the following public members functions
Mytime(): Default constructor to initialize hour,minute,second to zero
void getTime(): Function to enter hour,minute and second from keyboard.
void displayTime():Function to display hour,minute and second in following format hh:mm:ss
if hour,minute,second are single digit then left pad the result with zero.
For example 03:23:33
MyTime operator +(MyTime &): overload + operator to add two times entered through keyboard.

Complete the following code to run the program successfully.

Sample Input
2  4  56
10 59 11

Sample Output
13:04:07

Explanation: after adding hours, minutes,seconds of both time objects i.e
56+11= 1 minute 7 second
4+59+1 = 1 hour 4 minute
2+10+1 = 13 hour */

#include<iostream>
using namespace std;
class MyTime
{
    int hour;
    int minute;
    int second;
public:
    MyTime();
    void getTime();
    void displayTime();
    MyTime operator +(MyTime&);
};
MyTime::MyTime()
    {
    hour = 0;
    minute = 0;
    second = 0;
}
void MyTime::getTime()
{
    cin >> hour >> minute >> second;
}
void MyTime::displayTime()
{
    if(hour<10)
        cout << "0" << hour<< ":";
    else
        cout << hour << ":";
    if(minute < 10)
        cout << "0" << minute << ":";
    else
        cout << minute << ":";
    if(second <10)
        cout << "0"<< second;
    else
        cout << second;
}
MyTime MyTime::operator+(MyTime&obj)
{
    MyTime temp;
    temp.hour = hour + obj.hour;
    temp.minute = minute + obj.minute;
    temp.second = second + obj.second;
    if(temp.second > 60)
        {
        temp.minute+=1;
        temp.second-=60;
        if(temp.minute > 60)
            {
            temp.hour+=1;
            temp.minute-=60;
        }
    }
    return temp;
}
int main()
{
    MyTime date1,date2,date3;
    date1.getTime();
    date2.getTime();
    date3 = date1+date2;
    date3.displayTime();
    return 0;
}
