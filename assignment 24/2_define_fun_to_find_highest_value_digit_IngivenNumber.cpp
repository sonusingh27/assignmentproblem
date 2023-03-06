#include<iostream>
using namespace std;

class MaxDigits
{
    public:
    int n;
    void FindMaxDigit()
    {
        int max=-1;
        while(n !=0)
        {
            int rem =n%10;
            if(rem >max)
            max=rem;
            n=n/10;
        }
        cout<<"max digit"<<max<<endl;
    }
};
int main()
{
    MaxDigits m;
    cout<<"enrer a number"<<endl;
    cin>>m.n;
    m.FindMaxDigit();
    return 0;
}