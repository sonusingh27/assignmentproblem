#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("%c is uppercase",ch);
    else if(ch>='a' && ch<='z')
    printf("%c is lowercase",ch);
    else
    printf("%c is not a alphabets",ch);
    return 0;
}