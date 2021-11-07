#include<stdio.h>

int main(){
    int n,max,min,max_second,min_second;
    printf("Enter the no of elements in array: ");
    scanf("%d",&n);
    int temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&temp[i]);
    }
    max=temp[0];
    min = temp[0];
    for(int i=0;i<n;i++){
    if(temp[i]>max){
        max = temp[i];
    }
    if(temp[i]<min){
        min = temp[i];
    }
    }

    max_second = temp[0];
    min_second = temp[0];

    for(int i=0;i<n;i++){
    if(temp[i]>max_second && temp[i]<max){
        max_second = temp[i];
    }
    if(temp[i]<=min_second && temp[i]>min){
        min_second = temp[i];
    }
    }
    printf("largest element is: %d\n",max);
    printf("smallest element is: %d\n",min);
    printf("second largest element is: %d\n",max_second);
    printf("second smallest element is: %d",min_second);
}