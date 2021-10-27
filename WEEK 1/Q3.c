#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter value of a,b and c: ");
    scanf("%d %d %d", &a,&b,&c );
    if(b>c){
        if(a>b)
        printf("%d is max: ",a);
        }
        if(a>c){
            printf("%d is max: ",a);
            }
            else
            printf("%d is max: ",c);
}