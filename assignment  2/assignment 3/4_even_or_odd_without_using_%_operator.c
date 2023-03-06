#include<stdio.h>
int main()
{
    int x ;
    printf("enter number = ");
    scanf("%d",&x);
    if(x&1==1)
    printf("number is odd");
    else
    printf("number is even");
    return 0;

}