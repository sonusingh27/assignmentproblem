#include<iostream>
using namespace std;

     int max(int a, int b)
     {
        if(a<b)
        {
            cout<<"maximum value is "<<b<<endl;
        }
        else
        cout<<"maximum digit is "<<a<<endl;
     }
     float max(float x, float y)
     {
        if(x<y)
        {
            cout<<"maximum digits is "<<y<<endl;
        }
        else
        cout<<"maximum digit is "<<x<<endl;
     }

int main()
{
   int a,b;
   float x,y;
   cout<<"enter two integer value "<<endl;
   cin>>a>>b;
   cout<<"enter two float value"<<endl;
cin>>x>>y;

  cout<<"max of two float value"<<max(x,y);
  cout<<"max of two int value "<<max(a,b);
  return 0;

}