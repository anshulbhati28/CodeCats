#include<stdio.h>
int main(){

    int n;
    int sum=0;
    int even =0;
    int odd =0;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
        sum += i;
    }
    printf("\nsum of all numbers: %d ",sum);
    for(int i=1;i<=n;i++){
        if(i%2==0){
        even += i;
        }
    }
    printf("\nsum of even numbers: %d",even);
    for(int i=1;i<=n;i++){
        if(i%2==1){
        odd += i;
        }
    }
    printf("\nsum of odd numbers: %d",odd);

    return 0;

}