#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int low=0,high=n-1;
    while (low<high)
    {
        temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++){
        printf("\nReversed array is: ");
        printf("%d\n",arr[i]);
    }
    return 0;
}