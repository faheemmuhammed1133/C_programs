#include<stdio.h>

int main()

{
    int a,b,temp;
    printf("enter the values of a ,b");
    scanf("%d %d", &a ,&b );

   
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a is %d and b is %d",a,b);

    return 0;

}