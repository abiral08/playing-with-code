#include <stdio.h>

int findHighest(int num1, int num2, int num3)
{
    int highest = num1;

    if (num2 > highest)
    {
        highest = num2;
    }

    if (num3 > highest)
    {
        highest = num3;
    }

    return highest;
}

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int highest = findHighest(num1, num2, num3);

    printf("The highest number is: %d\n", highest);

    return 0;
}
