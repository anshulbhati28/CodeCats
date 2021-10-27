#include <stdio.h>

int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch >='a' && ch <='z' || ch >='A' && ch <='Z'){
        printf("It's an alphabet.");
    }
    else if(ch >= '1' && ch <='9')
    printf("It's a digit.");
    else{
        printf("It's a special character.");
    }

}