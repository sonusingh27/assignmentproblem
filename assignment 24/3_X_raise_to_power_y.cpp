#include<iostream>
using namespace std;

class Power
{
    public:
    int x,y;

    void xPowerY()
    {
         int result=1;
        while(y !=0)
        {  
            y--;
            result=result*x;
        }
        cout<<"power value is "<<result<<endl;
    }
};
int main()
{
    Power p;
    cout<<"enter the value f x and y"<<endl;
    cin>>p.x>>p.y;
    p.xPowerY();
    return 0;
}