#include <stdio.h>
char checkOddOrEven(int number)
{
    if (number % 2 == 0)
    {
        return 'E';
    }
    else
    {
        return 'O';
    }
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    char result = checkOddOrEven(number);
    if (result == 'E')
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}
