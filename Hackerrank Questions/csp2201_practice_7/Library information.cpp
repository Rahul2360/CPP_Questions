/*You have been given three classes Book, Pages and Library.
Class Book that contains information of book like title
author, publisher, price. Enter this information using get() function and display that information using display() function.

Class Pages contains information of pages that will enter number of pages through get() and will display them through display() function.

Class Library is inheriting Book and Pages classes to display the record of a particular book whose title has been entered in the main() function.
Complete the search function to search the information of given book title but if that title record doesn't exist
then print "NOT FOUND"

Complete the code by writing all the given function to find the record of given book
Title.

Sample Input
2
ProgrammingInC
ReemaThreja
Oxford
230
400
JavaProgramming
GarryCornHill
TataMcGrawHill
340
500
JavaProgramming
Sample Output
JavaProgramming
GarryCornHill
TataMcGrawHill
340
500
*/
#include <iostream>
#include<cstring>
using namespace std;
class Book
{
protected:
    char title[64];
    char author[100];
    char publisher [100];
    float price;
public:
    void get();
    void display();
};
class Pages
{
protected:
    int pages;
public:
    void get();
    void display();
};
class Library: public Book,public Pages
{
public:
	void Search(Library[],char*,int);
	void get();
};
void Book::get()
{
    cin.ignore();
    cin.getline(title,64);
    cin.getline(author,100);
    cin.getline(publisher,100);
    cin >> price;
}
void Book::display()
{
    cout << title << endl;
    cout << author << endl;
    cout << publisher << endl;
    cout << price << endl;
}
void Pages::get()
{
    cin >> pages;
}
void Pages::display()
{
    cout << pages << endl;
}
void Library::Search(Library a[],char *b,int c)
{
    int flag=0;
    Library x;
    for(int i=0;i<c;i++)
        if(strcmp(a[i].title,b)==0){
            flag=1;
        x=a[i];}
    if(flag==1){
        cout << x.title << endl << x.author << endl << x.publisher << endl << x.price << endl << x.pages << endl;}

    else
        cout << "NOT FOUND" << endl;
}
void Library::get()
{
    Book::get();
    Pages::get();
}

int main()
{
	int n;
	cin>>n;
	Library lib[n];
	for(int i=0;i<n;i++)
	{
	  lib[i].get();
	}
    char title[100];
    cin>>title;
    lib[0].Search(lib,title,n);
    return 0;
}
