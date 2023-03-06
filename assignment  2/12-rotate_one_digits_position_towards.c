#include<stdio.h>
int main(){
  int x , r , temp;
  printf("enter the value of n = ");
  scanf("%d",&x);
  r=x%10;
  temp=x/10;
  x=(r*100)+temp;
  printf("x=%d ",x);
  return 0;
}