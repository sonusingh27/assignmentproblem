#include<stdio.h>
int main()
{
    int n;
    printf("enter year = ");
    scanf("%d",&n);
    if((n%4==0) && ((n%400==0) ||  (n%100!=0)))
    {
        printf("it is leap year");
      
    }
    else
    printf("it is not a leap year");
    return 0;
}