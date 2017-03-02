/*MyDate class having data members as day,month,year and public member function as
MyDate(): Default constructor to initialize day,month,year by zero
MyDate operator +(int); // To add some integer in date1
MyDate operator -(int); // To subtract some integer from date1;
friend bool operator > (MyDate&,MyDate&); // To compare two dates
MyDate operator ++(MyDate&); //To increment date1 by 1
friend ostream& operator << (ostream&,MyDate&);
friend istream& operator >> (istream&,MyDate&);
void display(); //To display day,month and year
void getdate(); // To input day,month and year from keyboard.
consider leap year case also while adding integer or incrementing the date.
Sample Input
28 2 1993
31 12 1995
1
11 9 1996
Sample output
1:3:1993 //After adding 1 to date1 in first line in sample input
27:2:1993 //After substracting 1 i.e n from date1.
28:2:1993 is greater.// because 1993 comes before 1995
1:3:1993 // increment date by 1
11:9:1996*/
#include<iostream>
using namespace std;
class MyDate
{
	int day,month,year;
	public:
		MyDate();
		MyDate operator +(int);//To add some integer in date
		MyDate operator -(int); //To substract some integer from date;
		friend bool operator >(MyDate&,MyDate&);//To compare two dates
		MyDate operator ++(); //To increment date by 1
		friend ostream& operator <<(ostream&,MyDate&);
		friend istream& operator >>(istream&,MyDate&);
		void display();
		void getdate();
};
int main()
{
	MyDate date1,date2,date3;
	int n;
	date1.getdate();
	date2.getdate();
	cin>>n;
	date3=date1+n;
	date3.display();
	date3=date1-n;
	date3.display();

	if(date1>date2)
	cout<<date1<<endl;
	else
	cout<<date2<<endl;
    date3=++date1;
    date3.display();
	//"Displaying Date after overloading >> and << operators\n";
	cin>>date3;
	cout<<date3;
	return 0;
}
