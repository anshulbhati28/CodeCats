// COPY A STRING INTO ANOTHER USING POINTER
#include<stdio.h>
int main(){
    char a[10],b[10],*p1,*p2;
    printf("Enter the string: ");
    scanf("%s",a);
    p1 = a;
    p2 = b;
    while (*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("final string is: %s",b);
    return 0;

}