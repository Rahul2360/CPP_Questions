/*A class string1 allocates appropriate memory ﴾using new operator﴿ to a string
passed from the main function, and then decrypt the string, by subtracting 3 to
the ASCII value of each alphabet of the string.
Sample Input:
Deklodvkd
Sample Output:
Abhilasha*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class string1
{
	private:
		int len;
		char *str;
	public:
		string1();
        string1(char *s);
        ~string1();
        void show_string1();
        void decrypt( );
};
string1::string1(){len=0;}
string1::~string1(){}
string1::string1(char *s)
{
    int n= strlen(s);
    str = new char[n];
    strcpy(str,s);
}
void string1::show_string1()
{
    cout << str;
}
void string1::decrypt()
{
    int i;
    while(str[i]!='\0')
        {
        str[i]-=3;
        i++;
    }
}
int main()
{

	char newstr[100];
	cin>>newstr;
	string1 str1(newstr);
	str1.decrypt();
    str1.show_string1();
	return 0;
}
