#include<stdio.h>
int sp(int p ,int r, int t);
int main()
{
    int p,r,t,c;
    printf("\nenter amount,rate and time : ");
    scanf("%d %d %d",&p,&r,&t);
    c = sp(p,r,t);
    printf("\nsimple intrest = %d \n\n",c);
    return 0;
}
int sp(int p , int r , int t)
{
    return p*r*t/100;
}