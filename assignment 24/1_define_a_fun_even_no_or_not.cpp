#include<iostream>
using namespace std;

class PrimeNumber
{
    public:
    int n;

   void checkPrimeNumber()
        {
            int flag=0;
            for(int i=2; i<=n/2; i++)
            {
                if(n%2==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"number is prime "<<endl;
            }
            else
            cout<<"number is not a prime "<<endl;

        }
    
};
int main()
{
    PrimeNumber p;
    cout<<"enter a number"<<endl;
    cin>>p.n;
    p.checkPrimeNumber();
    return 0;
}

