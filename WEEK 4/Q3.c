#include<stdio.h>
int main(){
    int n,k,index;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the value of k: ");
    scanf("%d",&k);
    printf("Enter the array: ");
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        index = (i+k)%n;
        b[index]=a[i];
    }
    printf("Rotated array is: ");
    for(int i=0;i<n;i++){
        printf("%d",b[i]);
    }
    return 0;

}

