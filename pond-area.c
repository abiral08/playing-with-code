#include <stdio.h>

// User-defined function to calculate area
double calculateArea(double length, double breadth)
{
    return length * breadth;
}

int main()
{
    double length, breadth, area;

    printf("Enter the length of the pond: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the pond: ");
    scanf("%lf", &breadth);

    // Call the function with the input length and breadth
    area = calculateArea(length, breadth);

    printf("The area of the pond is: %.2lf square units.\n", area);

    return 0;
}
