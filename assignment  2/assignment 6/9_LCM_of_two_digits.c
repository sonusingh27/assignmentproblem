#include<stdio.h>
int main()
{
    int num1, num2, max;
    printf("enter num1 and num2 : ");
    scanf("%d %d",&num1 ,&num2);
    max=(num1>num2) ? num1 :num2;
    while(1)
    {
    if(max%num1==0 && max%num2==0)
    {
    printf("LCM of %d and %d is %d ",num1,num2,max);
    break;
    }
    else
    ++max;
    }
    return 0;
}