#include <stdio.h>
int FIND(int a, int b, int c, int d)
{
    if (a ^ 3 + b ^ 3 + c ^ 3 == d ^ 3)
    {
        return 100;
    }
    else
    {
        return 200;
    }
}
int main()
{
    int a, b, c, d;
    printf("enter four integer value");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int result = FIND(a, b, c, d);
    if (result == 100)
    {
        printf("the eqn a^3 + b^3 + c^3==d^3 is satisfied");
    }
    else
    {
        printf("the eqn a^3 + b^3 + c^3==d^3 is not satisfied");
    }
    return 0;
}