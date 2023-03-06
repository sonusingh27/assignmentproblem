#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=n; i>=0; i--)
    {
       printf("%d \n",2*i-1);
    }
    return 0;
}