/*WAP to overload +,‐ and * for matrix addition subtraction and multiplication.
Sample Input
2 2 2
3 3 3
1 1 1
1 1 1
1 1 1
1 1 1
Sample Output
Addition of two matrices
3 3 3
4 4 4
2 2 2
Subtraction of two matrices
1 1 1
2 2 2
0 0 0
Multiplication of two matrices
6 6 6
9 9 9
3 3 3
Explanation
Sample Input
First three lines are the input for first matrix
next three lines are the input for second matrix
Sample Output
Are the result of addition, subtraction and multiplication of two matrices given in sample
input
each element is separated by space in each row*/
#include<iostream>
using namespace std;
class Matrix
{
    int mat[3][3];
    int row,col;
    public:
    friend Matrix operator +(Matrix &,Matrix &);
    friend Matrix operator -(Matrix,Matrix);
    friend Matrix operator *(Matrix,Matrix);
    void Show();
};
Matrix operator+(Matrix &m1,Matrix &m2)
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >>m1.mat[i][j];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >>m2.mat[i][j];
    Matrix temp;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            temp.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
    return temp;
}
Matrix operator-(Matrix m3,Matrix m4)
{
    Matrix temp;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            temp.mat[i][j] = m3.mat[i][j] - m4.mat[i][j];
    return temp;
}
Matrix operator*(Matrix m5,Matrix m6)
{
    Matrix temp;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            temp.mat[i][j]=0;
            for(int k=0;k<3;k++) {
                temp.mat[i][j]=temp.mat[i][j]+(m5.mat[i][k]*m6.mat[k][j]);}
        }
    }
    return temp;
}
void Matrix::Show()
{
    for(int i=0;i<3;i++){
        cout << endl;
    for(int j=0;j<3;j++){
        cout <<mat[i][j] << " ";
        }
    }
}
int main()
{
    Matrix M1,M2,M3;
    M3=M1+M2;
    cout<<"Addition of two matrices";
    M3.Show();
    M3=M1-M2;
    cout<<"\nSubtraction of two matrices";
    M3.Show();
    M3=M1*M2;
    cout<<"\nMultiplication of two matrices";
    M3.Show();
    return 0;
}
