#include<stdio.h>
int main(){
    int n;
    int flag=0;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            flag++;
    }
    if(flag==0 && n!=1)
    printf("%d is a prime no: ",n);
    else
     printf("%d is not a prime no: ",n);
} 

// Prime no.s in between a range of no.s

/*
#include<stdio.h>
int main(){
    int n1,n2;
    int flag=0;
    printf("Enter the no.s: ");
    scanf("%d%d",&n1,&n2);
    for(int i=n1+1;i<n2;i++){
        for(int j=2;j<=i/2;j++){
        if(i%j==0)
            flag++;
        }
        if(flag==0 && i!=1){
        printf("%d",i);
        }
        flag = 0;
    }
} */