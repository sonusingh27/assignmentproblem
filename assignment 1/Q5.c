#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int length;

    printf("enter a string to calculate its length\n");
    gets(a);
    length =strlen(a);

    printf("length of string = %d\n",length);
    return 0;
}