#include<stdio.h>
/*
int finalPos(int x, int n){
    int jumpPos = n % 4,fPos = x;
    for(int i=1; i<=jumpPos; ++i){
        if(fPos  & 1){
            fPos += n-jumpPos+i;
        }
        else{
            fPos -= n-jumpPos+i;
        }
    }
    return fPos;
}
int main(){

    int t;
    int x,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",x,n);
        printf("%d\n",finalPos(x,n));
    }
    
    return 0;

}   */

#define ll long long

int main(){

    int t;
    int x,n,y,z=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&n);
        y = n%4;
        if(y==1)
        z = -n;
        else if(y==2)
        z = 1;
        else if(y==3)
        z = n+1;

        if(x&1)
        printf("%d\n",(x-z));
        else
        printf("%d\n",(x+z));
    }
    
    return 0;

} 