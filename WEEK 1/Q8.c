#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,imaginary,root1, root2,discriminant;

    printf("Enter the value of a,b and c:");
    scanf("%f %f %f", &a, &b ,&c );
   
    discriminant = (b*b) - (4*a*c);

    if(discriminant>0){
    root1 = (-b + sqrt(discriminant))/(2*a);
    root2 = (-b - sqrt(discriminant))/(2*a);
    printf("The roots are real and distinct \n");
    printf("Two roots of quadratic eqn are: %.2f %.2f", root1, root2);
    }

    if(discriminant == 0){
    root1 = root2 = (-b)/(2*a); 

    printf("The roots are Real and Equal. \n");
    printf("Two roots of quadratic eqn are: %.2f %.2f", root1, root2);

    }

    if(discriminant<0){

    imaginary = sqrt(-discriminant)/(2*a);

    root1 = (-b)/(2*a) ;
    root2 = (-b)/(2*a) ;

    printf("The roots are imaginary \n");
    printf("Two roots of quadratic eqn are: %.2f + i%.2f %.2f - i%.2f", root1, imaginary, root2, imaginary);

    }
    return 0;
}
