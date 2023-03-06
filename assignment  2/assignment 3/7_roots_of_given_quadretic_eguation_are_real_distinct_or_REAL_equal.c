#include<stdio.h>
int main()
{
    float a,b,c,discriminant;
    printf("enter coefficients a,b and c : ");
    scanf("%1f %1f %1f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    printf("real and distinct");
    else if(discriminant==0)
    printf("roots are real and equal");
    else
    printf("roots are complex");
    return 0;  
}