#include <stdio.h>

// Function to calculate sum of divisors
int sum_of_divisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }
    return sum;
}

// Function to check if numbers are amicable
int are_amicable(int a, int b) {
    return (sum_of_divisors(a) == b && sum_of_divisors(b) == a);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (are_amicable(num1, num2))
        printf("The numbers are amicable.\n");
    else
        printf("The numbers are not amicable.\n");

    return 0;
}
