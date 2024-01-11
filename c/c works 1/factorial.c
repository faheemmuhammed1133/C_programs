#include<stdio.h>

int main()

{
    int n,fact;
    printf("enter value for n7");
    scanf("%d", &n);
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial of your number is %d",fact);
    return 0;

}