#include <stdio.h>


float calculateSimpleInterest(float principal, float rate, float time)
{
    return (principal * rate * time) / 100;
}

int main()
{
    float principal, rate, time;

   
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    
    float simpleInterest = calculateSimpleInterest(principal, rate, time);

    
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
