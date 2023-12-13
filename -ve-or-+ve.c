#include <stdio.h>

// Function to check if a number is positive or negative
void checkNumber(int num)
{
    if (num > 0)
        printf("%d is a positive number.\n", num);
    else if (num < 0)
        printf("%d is a negative number.\n", num);
    else
        printf("The number is zero.\n");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function with the input number
    checkNumber(num);

    return 0;
}
