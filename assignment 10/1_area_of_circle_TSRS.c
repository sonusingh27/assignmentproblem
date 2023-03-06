#include<stdio.h>
float area(int  radius);
float pi =3.14;
int main()
{
    int radius;
    float c;
    printf("enter radius of circle : ");
    scanf("%d ",&radius);
    c=area(radius);
    printf("area of radius is %.3f \n",c);
    return 0;

}
float area(int radius)
{
    return pi*radius*radius;
}