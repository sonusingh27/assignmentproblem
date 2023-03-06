#include<stdio.h>
void odd_number(int n);
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    odd_number(n);
    return 0;
}
void odd_number(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(i%2 !=0)
        printf("%d \n ",i);
    }
}