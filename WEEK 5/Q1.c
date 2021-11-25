// PROGRAM TO ADD TWO NUMBERS USING POINTERS

#include<stdio.h>
int main()
{
    int a,b,c,*p1,*p2,*p3;
    p1=&a;
    p2=&b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    p3=&c;
    *p3=(*p1)+(*p2);
    printf("sum is: %d",*p3);
    return 0;
}