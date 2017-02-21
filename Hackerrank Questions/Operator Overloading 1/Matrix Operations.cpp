/*Write a C++ program to create a class called MATRIX using a two dimensional array of
integers.Implement the following operations by overloading the operator == which
checks the compatibility of the two matrices to be added and subtracted. Perform the
addition and subtraction by overloading the operators + and ‐ respectively. Display the
results by overloading operator <<.
Sample Input
2 //number of rows
2 //number of columns
2 3
4 5
2 // no of rows of second matrix
2 //no of column of second matrix
7 8
9 10
Sample Output
Addition of matrices
the result is
9 11
13 15
subtraction of matrices
The result is
-5 -5
-5 -5*/
#include<iostream>
using namespace std;
class matrix
{
  private:
   long m[10][10];
  int row;int col;
  public:void getdata();
  int operator ==(matrix);
  matrix operator+(matrix);
  matrix operator-(matrix);
  friend ostream & operator << (ostream &,matrix &);
};
int main()
{
  matrix m1,m2,m3,m4;

  m1.getdata();
  m2.getdata();
  if(m1==m2)
  {
    m3=m1+m2;
    m4=m1-m2;
    cout<<"Addition of matrices\n";
    cout<<"the result is\n";
    cout<<m3;
    cout<<"subtraction of matrices\n";
    cout<<"The result is \n";
    cout<<m4;
  }
  else
  {
    cout<<"order of the input matrices is not identical\n";
  }

}
