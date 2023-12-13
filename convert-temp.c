#include <stdio.h>
float convert(float f)
{
    return (5.0 / 9.0) * (f - 32);
}
int main()
{
    float f, c;
    printf("Enter the temp in fahrenheit");
    scanf("%f", &f);
    c = convert(f);
    printf("Equivalent temperature in celsius is %f", c);
    return 0;
}
