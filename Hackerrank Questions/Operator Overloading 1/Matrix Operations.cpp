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
void matrix::getdata()
    {
    cin >>row >> col;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
         cin >> m[i][j];
}
int matrix::operator == (matrix a)
{
    if(row==a.row && col==a.col){
        return 1;
    }
    else
        return 0;
}
matrix matrix::operator + (matrix b)
    {
    matrix temp;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            temp.m[i][j] = m[i][j]+b.m[i][j];
        }
    temp.row=row;
    temp.col=col;
    }
    return temp;

}
matrix matrix::operator-(matrix c)
    {
   /* for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            m[i][j] = m[i][j]-c.m[i][j];
        }}
    return *this;*/
    matrix temp;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            temp.m[i][j] = m[i][j]-c.m[i][j];
        }
    temp.row=row;
    temp.col=col;
    }
    return temp;

}
ostream & operator << (ostream &l,matrix& p)
    {
   for(int i=0;i<p.row;i++){
        for(int j=0;j<p.col;j++){
           l<<p.m[i][j]<<" " ;
        }
   cout<<endl;
   }
return l;
}
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
