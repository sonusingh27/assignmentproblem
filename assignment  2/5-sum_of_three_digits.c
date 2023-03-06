#include<stdio.h>
int main(){

    int x=125 , sum=0;
    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=sum+x;
    printf("sum =%d ",sum);
    return 0;

}