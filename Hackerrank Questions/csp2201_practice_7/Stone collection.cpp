/*Neel got a task at school to collect N stones.He can collect only 1 stone a day. As N can be a very large number so it
could take many days to complete the task, but then he remembers that his mother gave him a magic that can double anything
 (i.e if he has 2 stones, the magic will make them to 4 stones). Neel can use this magic any number of time on the collected
 stone on a particular day and add this to the previously collected stones. Remember that he wants exactly N stones and he
  can't throw any stone. If he gets more than N stones then he gets 0 marks, of course he doesn't want 0 marks. Help him to
  collect exactly N stones in minimum number of days.Create a base class problem and define it as abstract class and a derived
   class stones to solve neel’s problem.
Sample Input

2
1
3

Sample Output

1
2
In the Sample Input
First line of input will contain number of test cases (T). Then next T lines contains a single number N, which is number of stones Neel has to collect.
In the Sample output
 For each test case, Print a single number which is the minimum number of days taken by Neel to complete the task.*/
 #include <iostream>
using namespace std;
class problem{
    public:
    virtual int ones()=0;
};
class stones:public problem{
    private:
    int count,n;
    public:
    stones();
    int ones();
};
stones::stones()
{
    cin >> n;
}
int stones::ones()
{
    int count=0,rem;
    while(n!=0){
        rem=n%2;
        if(rem==1)
            count++;
        n/=2;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    { problem *p;
        stones s;
    p=&s;
    cout<<p->ones()<<endl;
    }
    return 0;
}
