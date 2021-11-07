#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    int count = (2*n)-1;
    for(int i=1;i<=count;i++){
        for(int j=1;j<=count;j++){
            if ((j==i) || (j==count-i+1)){
                printf("*");
            }
            else
            printf(" ");
        }
         printf("\n");
    }
}