/*Stack is a linear data structure which follows a particular order in which the operations are performed.
The order may be LIFO (Last in First Out) or FILO (First in Last Out).
An abstract class “Stack” has been given from which you will design “Mystack” class to implement push ()
function to insert elements in stack, pop () function to pop () elements from stack and max () function to find maximum element from the stack.
The main () and max () function has been already defined in the unedited portion of the specified code.
Your task is to complete push () function that will insert elements in stack and pop () function that will
remove elements in opposite order from the stack.
Complete the given incomplete code to design stack implementation.
Sample Input
5
1 2 3 4 5
Sample Output
Max is 5*/
#include<iostream>
using namespace std;

#define MAX 1000
class Stack
{
protected:
	 int top;
public:
    int a[MAX];
    virtual void push(int)=0;
    virtual int pop()=0;
    virtual int max()=0;
};
class MyStack:public Stack
{
public:

    MyStack()
	{
	   top = -1;
	 }
	 void push(int);
int pop();

	 int max()
{
	int m=-1;
	for(int i=0;top!=-1;i++)
	{
		int x=pop();
     if(m<x)
       m=x;
   }
   return m;
}
};
void MyStack::push(int num)
{
    static int i=0;
    a[i]=num;
    i++;
    top++;
}
int  MyStack::pop()
{
    static int i=-1;
    i++;
    top--;
    return a[i];
}
int main()
{
    Stack *ss;
    MyStack mystack;
    ss=&mystack;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		ss->push(temp);
	}
    cout <<"Max is "<<ss->max();

    return 0;
}

