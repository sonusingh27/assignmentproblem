#include<iostream>
using namespace std;

class Fibonacci
{
    public:
    int n,a,b,c;

    
  void fib()
    { 
        if(n==0 || n==1)
        {
            cout<<"fibonacci number"<<endl;
        }
        else
        {
         a=0;
        b=1;
        c=a+b;

        while(c<n)
        {
          a=b;
          b=c;
          c=a+b;

        } 
        if(c==n)
        {
            cout<<"fibonacci number"<<endl;
        }
        else{
            cout<<"not a fibonacci number"<<endl;
        }
        }
    }
};
int main()
{
    Fibonacci f;
    cout<<"enter a number"<<endl;
    cin>>f.n;
    f.fib();
    return 0;
}