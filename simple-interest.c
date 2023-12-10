#include <stdio.h>

// Function to calculate simple interest
float calculateInterest(float *p, float *r, float *t)
{
    return (*p * *r * *t) / 100;
}

int main()
{
    // Define principal, rate of interest and time
    float p = 1000, r = 5, t = 2;

    // Calculate the simple interest
    float interest = calculateInterest(&p, &r, &t);

    // Print the simple interest
    printf("The simple interest is: %.2f", interest);

    return 0;
}
