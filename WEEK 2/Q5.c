#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter the no.: ");
    scanf("%d",&n);
    for(int i=n;n!=0;n=n/10){
        r = n%10;
        sum = (sum*10) +r;
    }
    printf("The no. in reverse order is: %d",sum);
}