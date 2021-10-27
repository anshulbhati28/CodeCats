#include<stdio.h>
#include<math.h>

int main(){

    float basic,DA,HRA,Gross;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    if(basic<=10000){
        DA = (basic * 0.8); 
        HRA = (basic * 0.2);
        Gross = basic + DA + HRA;

        printf("Gross salary is: %.2f ", Gross);
    }

    if(basic>10000 && basic <= 20000){
        DA = (basic * 0.9); 
        HRA = (basic * 0.25);
        Gross = basic + DA + HRA;

        printf("Gross salary is: %.2f ", Gross);
    }

    if(basic>20000){
        DA = (basic * 0.95); 
        HRA = (basic * 0.30);
        Gross = basic + DA + HRA;

        printf("Gross salary is: %.2f ", Gross);
    }
    
    return 0;
}