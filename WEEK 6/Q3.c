#include<stdio.h>
#include<string.h>
#include<limits.h>

void findSubsequence(char str[], int k){
    int a[255]={0};
    int n = strlen(str);
    for(int i=0;str[i]!='\0';i++){
        a[str[i]-'a']++;
    }
    for(int i=0;str[i]!='\0';i++){
        if(a[str[i]-'a']>=k)
        printf("%c",str[i]);
    }

}
int main(){
    int k =2;
    char str[] = "geeksforgeeks";
    findSubsequence(str,2);
    return 0;
}