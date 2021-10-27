#include<stdio.h>
int main(){
    int amt;
    printf("Enter the amount: ");
    scanf("%d",&amt);
    int fivehundred = amt/500;
    amt = amt%500;
    int onehundred = amt/100;
    amt = amt%100;
    int fifty = amt/50;
    amt = amt%50;
    int twenty = amt/20;
    amt = amt%20;
    int ten = amt/10;
    amt = amt%10;
    int five = amt/5;
    amt = amt%5;
    int two = amt/2;
    amt = amt%2;
    int one = amt/1;
    printf("%d \n",fivehundred);
    printf("%d \n",onehundred);
    printf("%d \n",fifty);
    printf("%d \n",twenty);
    printf("%d \n",ten);
    printf("%d \n",five);
    printf("%d \n",two);
    printf("%d \n",one);
    return 0;
}