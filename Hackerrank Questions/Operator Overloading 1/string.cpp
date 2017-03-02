/*Design a Mystring class having char str[100] as its data member and overload
<,>,== and + operator to perform string comparison and string concatenation.
The public member functions in the class are given below
Mystring﴾﴿ :Default constructor that will initialize string with blank space.
void read﴾﴿: to read string from keyboard
void display﴾﴿ ://to display string
bool operator <﴾Mystring s﴿ // < operator for comparison
bool operator >﴾Mystring s﴿;// > operator for comparison
bool operator ==﴾char*﴿; // == operator for comparison
Mystring operator +﴾Mystring s﴿; //+ operator overloading for string concatenation
<,> operators will check whether the first string appears before or after the second
in the alphabetical order.
Sample input
RajKumar
Venu Gopal
Sample output
RajKumar <Venu Gopal
RajKumar VenuGopal
Explanation: in sample output first string < second string as RajKumar comes first in
alphabetical order as compared to Venu Gopal and in second line of sample output ,strings
are displayed after performing concatenation.*/
#include<iostream>
#include<cstring>
using namespace std;
class Mystring
{
 	char str[100];
	 public:
	 Mystring();
	 void read();
	 void display();
	 bool operator <(Mystring s);
	 bool operator >(Mystring s);
	 bool operator ==(Mystring s);
	 Mystring operator +(Mystring s);
};
int main()
{
	Mystring str1,str2,str3;
	str1.read();
	str2.read();
	str1.display();
	if(str1<str2)
	cout<<"<";
	else if(str1>str2)
	cout<<">";
	else
    {
        if(str1==str2)
	cout<<"==";
    }
	str2.display();
    cout<<endl;
	str3=str1+str2;
	str3.display();
	return 0;
}
