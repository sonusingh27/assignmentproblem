#include<stdio.h>
int main()
{
    int c,s,l,p;
    printf("enter cost price and selling price : ");
    scanf("%d %d",&c,&s);
    if(c<s)
    printf("profit = %d \n",p=s-c);
    else if(s<c)
    printf("loss = %d \n",l=c-s);
    else
    printf("no any profit and loss");
    return 0;

}