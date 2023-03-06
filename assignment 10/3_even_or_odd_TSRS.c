#include<stdio.h>
int even_odd(int n);
int main()
{
    int n; 
    printf("\nenter any number\n");
    scanf("%d ",&n);
    even_odd(n) ? printf("\neven number\n") : printf("\nodd number\n");
    return 0;

}
int even_odd(int n)
{
    return (n%2==0);
}