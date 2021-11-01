#include<stdio.h>

long long fctrl(long long n){
    long long count = 0;
    while (n!=0)
    {
        long long k = n/5;
        count += k;
        n = n/5;
    }
    return count;
}

int main(){
    long long t;
    scanf("%lld",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf("\n%lld",fctrl(n));
        

    }
}