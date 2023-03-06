#include<stdio.h>

int main()
{
    int date,month,year;
    printf("enter date in DD/MM/YYYY formate.\n");
    scanf("%d/%d/%d",&date,&month, &year);
    printf("Day= %d ,Month= %d, year= %d",date,month,year);
    return 0;
}