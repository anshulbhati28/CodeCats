//FIND MAX MIN ELEMENT IN AN ARRAY

#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5]={1,2,45,3,0};
    int*p,i,max = INT_MIN, min = INT_MAX;
    p = a;
    for(int i=0;i<5;i++){
        if(*p>max)
        max = *p;
        if(*p<min)
        min = *p;

        p++;
    }
    printf("max is: %d\n",max);
    printf("min is: %d",min);
    return 0;
}