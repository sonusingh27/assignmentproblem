#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;

}
float add(int a, float b)
{
    return a+b;
}
float add(float a, float b)
{
    return a+b;
}
int main()
{
    cout<<"addition of two int value "<<add(3,8);
    cout<<"addition of int and float value "<<add(6,4.4);
   cout<<"addition of two float value  "<<add(3.4,5.4);
    return 0;
}