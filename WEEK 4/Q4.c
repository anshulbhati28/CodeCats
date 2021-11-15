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
        for(int j=i+1;j<n;j++){
            if(a[j]==k-a[i])
            printf("%d %d",i,j);
        }
    }
    return 0;
}
