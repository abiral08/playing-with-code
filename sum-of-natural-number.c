#include <stdio.h>
int sumofnaturalnumbers(int n)
{
    return n * (n + 1) / 2;
}
int main()
{
    const int n = 10;
    int sum = sumofnaturalnumbers(n);
    printf("sum of the first %d natural numbers: %d\n", n, sum);
    return 0;
}