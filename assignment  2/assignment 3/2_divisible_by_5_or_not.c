#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0){
        printf("it number is divisible by 5");
    }
    else
    printf("it is not divisible by 5");
    return 0;
}