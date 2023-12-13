#include <stdio.h>

// Function to check if a number is palindrome
int is_palindrome(int n) {
    int reversed = 0, original = n, remainder;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return original == reversed;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_palindrome(num))
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
