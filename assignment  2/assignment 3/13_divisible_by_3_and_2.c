#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
    printf("it is divisible by 2 and 3");
    else
    printf("it is not divisible by 3 and 2");
    return 0;
}