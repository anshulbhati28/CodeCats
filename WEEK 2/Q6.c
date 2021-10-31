#include<stdio.h>
int main(){
    int base,power,temp=1;
    printf("Enter the base: ");
    scanf("%d%d",&base,&power);
    for(int i=1;i<=power;i++){
        temp = temp*base;
    }
    printf("%d",temp);

}