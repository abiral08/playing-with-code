#include <stdio.h>

float calculateCircleArea(float radius)
{
    return 3.14159 * radius * radius;
}

float calculateCircleCircumference(float radius)
{
    return 2 * 3.14159 * radius;
}

int main()
{
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = calculateCircleArea(radius);
    float circumference = calculateCircleCircumference(radius);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}