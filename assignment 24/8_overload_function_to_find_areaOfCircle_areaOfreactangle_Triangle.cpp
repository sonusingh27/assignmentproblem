#include<iostream>
using namespace std;

//class FindArea
//{
   // public:
   // float r ,b,h,l,w;
    
    float area(float r)
    {
        return ( 3.14*r*r);
    }
    float area(float b,float h)
    {
        return (b*h)/2;
    }
    int area(int l, int w)
    {
        return l*w;
    }

//};
int main()
{
    //FindArea f;
    int r ,b,h,l,w;
    int ch;
    cout<<"enter 1 for circle area"<<endl;
    cout<<"enter 2 for rectangle area "<<endl;
    cout<<"enter 3 for triangle area "<<endl;
    cout<<"enter key"<<endl;
    cin>>ch;

    switch(ch){
         
         case 1:
         {
            cout<<"enter the radious of circle  "<<endl;
            cin>>r;
            cout<<"area of circle is  "<<area(r);
            break;
         }
         case 2:
         {
            cout<<"enter bredth and height of reactangle"<<endl;
            cin>>b>>h;
            cout<<"area of rectangle is "<<area(b,h);
            break;
         }
         case 3:
         {
            cout<<"enter lenght and width of tringle"<<endl;
            cin>>l>>w;
            cout<<"area  of triangle is "<<area(l,w);
            break;
         }
         default:
         {
            cout<<"invalid input"<<endl;
         }
    }
    return 0;
}