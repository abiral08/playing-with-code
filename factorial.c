#include <stdio.h>
int fact(int);
void main()
{
    int n, res;
    clrscr();
    printf("Enter the number");
    scanf("%d", &n);
    res = fact(n);
    printf("Factorial: %d\n", res);
    getch();
}
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}