#include <stdio.h>

int main()
{
    int maths,physics,chemistry,biology,computer;
    float percentage;

    printf("Enter marks of maths: ");
    scanf("%d", &maths);
    printf("Enter marks of physics: ");
    scanf("%d", &physics);
    printf("Enter marks of chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks of biology: ");
    scanf("%d", &biology);
    printf("Enter marks of computer: ");
    scanf("%d", &computer);

    percentage =  (maths+physics+chemistry+biology+computer)/5.0 ;
    printf("percentage is: %.2f\n", percentage);

    if(percentage >= 90 )
    {
        printf("A");
    }
    else if(percentage >= 80 && percentage < 90)
    {
        printf("B");
    }
    else if(percentage >= 70 && percentage < 80)
    {
        printf("C");
    }
    else if(percentage >= 60 && percentage < 70)
    {
        printf("D");
    }
    else if(percentage >= 40 && percentage < 60)
    {
        printf("E");
    }
    else if(percentage < 40)
    {
        printf("F");
    }

    return 0;
}