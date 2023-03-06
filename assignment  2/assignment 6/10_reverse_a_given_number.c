#include<stdio.h>
int main()
{
    int n,reverse =0,reminder;
    printf("enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
       reminder=n%10;
       reverse=reverse*10 +reminder;
       n=n/10;
        
    }
    printf("reverse number = %d ",reverse);
    return 0;
}