/*ComplexNumber is a class the]at overloads +=,-=,*=,/=,operators to perform addition
,subtraction,multiplication and dic=vision.
Complete the following code to run this program successfully.
Sample Input
3  2
4  5
Sample Output
7.00+7.00i
-1.00+-3.00i
2.00+23.00i
0.54+-0.17i
Explanation: In first line of input we have taken two complex number 3+2i and in second line 4+5i
In sample Output
first line displays the addition of (3+2i)+(4+5i)=7+7i
and next line displays substraction,multiplication and division of given complex numbers.
Complete the following code to run this program successfully*/

#include<iostream>
#include<iomanip>
using namespace std;
class Complex
{
	double real;
	 double imag;
	 public:
	 Complex();
	 Complex(double,double);
	 void getComplexNumber();
	 void DisplayComplexNumber();
	Complex operator+(Complex&);
	 Complex operator-(Complex&);
	 Complex operator*(Complex&);
 	friend Complex operator/(Complex&,Complex&);
};
int main()
{
		Complex obj1,obj2,obj3;
		obj1.getComplexNumber();
		obj2.getComplexNumber();
		obj3=obj1+obj2;
		obj3.DisplayComplexNumber();
		obj3=obj1-obj2;
		obj3.DisplayComplexNumber();
		obj3=obj1*obj2;
		obj3.DisplayComplexNumber();
		obj3=obj1/obj2;
		obj3.DisplayComplexNumber();
		return 0;
}
