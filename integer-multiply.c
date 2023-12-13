#include <stdio.h>

// User-defined function to multiply two numbers
int multiply(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int num1, num2, product;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function with the input numbers
    product = multiply(num1, num2);

    printf("The product of the two numbers is: %d\n", product);

    return 0;
}
