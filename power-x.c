#include <stdio.h>

// User-defined function to calculate power
double power(double y, int x)
{
    double result = 1;
    for (int i = 0; i < x; ++i)
        result *= y;
    return result;
}

int main()
{
    double y;
    int x;

    printf("Enter the base number: ");
    scanf("%lf", &y);

    printf("Enter the power raised: ");
    scanf("%d", &x);

    printf("%.2lf^%d = %.2lf\n", y, x, power(y, x));

    return 0;
}
