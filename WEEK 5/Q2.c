// PROGRAM TO SWAP USING POINTERS

#include<stdio.h>

void swap(int* a,int* b){
    int p = *a;
    *a = *b;
    *b = p;
    printf("%d %d\n",*a,*b);
}
int main()
{
   int a=5,b=10,*p1,*p2;
   p1=&a;
   p2=&b;
   swap(p1,p2);
   printf("%d %d",a,b);
   return 0;
}

// PROGRAM TO SWAP WITHOUT USING 3RD VARIABLE USING POINTERS
/*

#include<stdio.h>

void swap(int* a,int* b){
    *a = (*a)+(*b);
    *b = (*a) - (*b);
    *a = (*a) - (*b);
    printf("%d %d\n",*a,*b);
}
int main()
{
   int a=5,b=10,*p1,*p2;
   p1=&a;
   p2=&b;
   swap(p1,p2);
   printf("%d %d",a,b);
   return 0;
}

*/