#include <stdio.h>

int main()
{
    char c = 'A';
    char *p = &c; // p is a pointer to c

    printf("Value of c: %c\n", c);
    printf("Value of *p: %c\n", *p);

    *p = 'B'; // change the value of c through the pointer

    printf("Value of c: %c\n", c);
    printf("Value of *p: %c\n", *p);

    return 0;
}
