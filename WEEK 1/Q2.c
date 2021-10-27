#include <stdio.h>

int main(){
    int a,b;
    printf("Enter value of a and b");
    scanf("%d %d", &a,&b );
    if(a>b){
        printf("%d is max", a);
    }
    else
    printf("%d is min", b);
    return 0;
}