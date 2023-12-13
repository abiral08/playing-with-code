#include <stdio.h>

// Function to calculate HCF
int hcf(int a, int b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("HCF = %d\n", hcf(num1, num2));
    printf("LCM = %d\n", lcm(num1, num2));

    return 0;
}
