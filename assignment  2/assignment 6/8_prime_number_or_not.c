#include<stdio.h>
int main()
{
    int n ,count=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("it is prime number");
    else
    printf("it is not a prime number");
    return 0;
}