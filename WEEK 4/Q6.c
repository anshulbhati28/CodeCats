#include<stdio.h>
int main(){
    int n,k,index;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    printf("Enter the array: ");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(k==a[i])
        printf("%d",i);
       else if(a[i]>k)
            printf("%d",i);
            break;
    }

    return 0;
}