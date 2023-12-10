#include<stdio.h>

// Function to add two tables
void addTables(int* table1, int* table2, int* result, int size) {
    for(int i = 0; i < size; i++) {
        *(result + i) = *(table1 + i) + *(table2 + i);
    }
}

int main() {
    // Define the size of the tables
    int size = 5;

    // Define two tables
    int table1[5] = {1, 2, 3, 4, 5};
    int table2[5] = {6, 7, 8, 9, 10};

    // Define the result table
    int result[5];

    // Add the tables
    addTables(table1, table2, result, size);

    // Print the result
    for(int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
