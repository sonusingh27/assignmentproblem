#include<iostream>
using namespace std;
 
 class Addition
 {
    public:
    int x,y,z;
    Addition(int a,int b ,int c=0)
    { 
        x=a;
        y=b;
        z=c;

    }
    int add()
    {
        return x+y+z;
    }
 };
 int main()
 {  // int x,y ,z;
    //  cout<<"enter two or three number"<<endl;
   //  cin>>x>>y>>z;
    Addition a = Addition(4,5);
    Addition b = Addition(2,5,7);
   // int p=(*a).add();
    cout<<"addition is "<<a.add()<<endl;
    cout<<"addition is "<<b.add();
    return 0;
 }