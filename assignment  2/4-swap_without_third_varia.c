#include<stdio.h>
int main(){

int x, y;
printf("\nenter value of x and y :");
scanf("%d %d ",&x,&y);
printf("\nbefore swaping x = %d and y = %d\n",x,y);

x=x+y;
y=x-y;
x=x-y;
printf("\nafter swaping x = %d and y = %d \n\n",x,y);
return 0;


}