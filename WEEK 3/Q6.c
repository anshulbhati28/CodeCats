#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the no of elements in array: ");
    scanf("%d",&n);
    int temp[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        temp[i]=x;
    }
    int k;
    printf("Enter the no which needs to be counted in array: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if (temp[i]==k)
        {
            count++;
        }
    }   
    if(count==0){
            printf("%d is not present in the array.",k);
        }
   printf("%d occured %d times in the array.",k,count);
}