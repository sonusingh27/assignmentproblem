#include<stdio.h>
int main()
{
    int n;
    printf("enter number =");
    scanf("%d ",&n);
    if(n%7==0 || n%3==0)
    printf("it is divisible by 7 or 3");
    else
    printf("it is not divisible by 7 or 3");
    return 0;
}