#include<stdio.h>
#include<string.h>
int main(){
    int flag=0;
    char str[20];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='0'){
            for(int j=i;str[j]!='\0';j++){
                if(str[j]=='0'){
                    flag = 1;
                    printf("It's a DUCK number.");
                    break;
                }
            }
            if(flag==0)
            printf("It's not a DUCK number.");
            break;
        }
    }
}
