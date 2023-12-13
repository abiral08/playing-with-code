#include <stdio.h>

// User-defined function to calculate sum
int calculateSum(int n)
{
    int sum = 0, i, num;

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }

    return sum;
}

int main()
{
    int n, sum;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Call the function with the input n
    sum = calculateSum(n);

    printf("The sum of the integers is: %d\n", sum);

    return 0;
}
