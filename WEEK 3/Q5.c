#include<stdio.h>
int main(){
    int n,sum=0,sum_even=0,sum_odd=0,sum_odd_position=0,sum_even_position=0;
    printf("Enter the no of elements in array: ");
    scanf("%d",&n);
    int temp[n];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        temp[i]=x;
    }
    for(int i=0;i<n;i++){
         sum += temp[i];
    }
    for(int i=0;i<n;i++){
        if(temp[i]%2==0)
         sum_even += temp[i];
    }
    for(int i=0;i<n;i++){
        if(temp[i]%2==1)
         sum_odd += temp[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==1)
         sum_odd_position += temp[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0)
         sum_even_position += temp[i];
    }
    printf("sum of all elements: %d\n",sum);
    printf("sum of even elements is: %d\n",sum_even);
    printf("sum of odd elements is: %d\n",sum_odd);
    printf("sum of odd position elements is: %d\n",sum_odd_position);
    printf("sum of even position elements is: %d",sum_even_position);
    

}