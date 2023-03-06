#include<stdio.h>
int main()
{
    int m,c,b,h,e ,sub;
    printf("enter the marks of maths,chemistry,biology,hindi,and english : ");
    scanf("%d %d %d %d %d",&m,&c,&b,&h,&e);

    if(m>=33 && c>=33 && b>=33 && h>=33 && e>=33)
    printf("passed the exam");
    else
    printf("failed the exam");
    return 0;
    
}