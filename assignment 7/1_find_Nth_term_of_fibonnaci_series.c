#include<stdio.h>
int main()
{
    int n ,fib;
    printf("enter a number");
    scanf("%d",&n);
    if(n<=1)
    printf("%d ",n);
    else
    fib=(n-1)+(n-2);
    printf("fibonnaci = %d",fib);
    return 0;
}