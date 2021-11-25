//PRINTING A STRING USING POINTERS 
#include<stdio.h>
#include<string.h>
void print(char* c){
    while (*c!='\0')
    {
        printf("%c",*c);
        c++;
    }
    
}
int main(){
    char c[20] = "HELLO";
    print(c);
}