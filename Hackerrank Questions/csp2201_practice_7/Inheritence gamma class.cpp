/*Given two classes alpha and beta, create a new class gamma.

Features of 'gamma' class:
It should inherit the classes alpha and beta.
It should have a constructor gamma(int a, int b, float c).
Initialize members of alpha with '2 * a'.
Initialize all the members of beta with 'c'.
'gamma' should have two member variables named u, v. 'u' should be initialized with 'a' and 'v' with 'b'.
It should contain a member function 'show_gamma()' defined below.

void show_gamma(){
   cout <<" u = "<<u<<"\n";
   cout <<" v = "<<v<<"\n";
}

Note: The beta constructor should be called before alpha constructor.*/
#include <iostream>
#include <stdio.h>

using namespace std;

class alpha {
  int x;
public:
  alpha(int i){
    x=i;
    cout<<"In alpha\n";
  }
  void show_alpha(){
    cout<<" x = "<<x<<"\n";
  }
};

class beta {
  float p,q;
public:
  beta(float a, float b){
    p=a;
    q=b+p;
    cout<<"In beta\n";
  }
  void show_beta(){
    cout<<" p = "<<p<<"\n";
    cout<<" q = "<<q<<"\n";
  }
};
class gamma:public alpha, public beta
{
    int u,v;
    public:
    gamma(int a,int b,float c):alpha(2*a),beta(c,c){
        u=a;
        v=b;
    }
    void show_gamma(){
        cout <<" u = "<<u<<"\n";
        cout <<" v = "<<v<<"\n";
    }
};
int main () {
  int a,b;
  float c;
  scanf("%d %d %f",&a,&b,&c);
  gamma g(a,b,c);
  g.show_alpha();
  g.show_beta();
  g.show_gamma();
  return 0;
}
