// PROGRAM TO PRINT SUM OF ARRAY ELEMENTS USING POINTERS
#include<stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int* p =a;
    int s=0;
    for(int i=0;i<5;i++){
        s += *p;
        p++;
    }
    printf("%d",s);
    return 0;
}


/* 

#include<stdio.h>
int sum=0;
void add(int a[],int size){
    for(int i=0;i<size;i++){
       sum += a[i];
    }

}
int main(){
    int a[5] = {1,2,3,4,5};
    int size = (sizeof(a))/(sizeof(a[0]));
    add(a,size);
    printf("%d",sum);
    
} */