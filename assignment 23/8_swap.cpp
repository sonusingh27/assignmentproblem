#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"value of a is "<<a<<" value of b is "<<b;
}