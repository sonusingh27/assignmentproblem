#include<iostream>
using namespace std;


    void swap(int &num1 , int &num2)
    {
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
    }

int main()
{

    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"after swaping a is  "<<a<<" and b is "<<b;
 return 0;
}


