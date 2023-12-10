#include<stdio.h>

// Function to calculate sum
int calculateSum(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    // Define the size of the array
    int size = 5;

    // Define an array
    int arr[5] = {1, 2, 3, 4, 5};

    // Calculate the sum
    int sum = calculateSum(arr, size);

    // Print the sum
    printf("The sum of the array elements is: %d", sum);

    return 0;
}
