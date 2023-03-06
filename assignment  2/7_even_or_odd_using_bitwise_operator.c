#include<stdio.h>
int main()
{
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    (n&1)==1 ? printf("odd number") : printf("even number");
    return 0;
}