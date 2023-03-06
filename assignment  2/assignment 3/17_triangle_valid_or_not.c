#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("enter three angle of tringle : ");
    scanf("% %d %d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(sum==180)
    printf("it is a valid triangle");
    else
    printf("it is not a valid triangle");
    return 0;
}