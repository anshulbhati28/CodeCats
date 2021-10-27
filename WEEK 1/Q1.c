#include <stdio.h>

int main(){
    int num;
    printf("Enter the no.");
    scanf("%d", &num);
    if(num%2==0){
        printf("Even no.");
    }
    else
    printf("odd no.");
    return 0;
}