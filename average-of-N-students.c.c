#include <stdio.h>

// Define the structure
struct Student
{
    char name[50];
    int marks;
};

int main()
{
    int i, num;
    float total = 0.0, avg;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num);

    // Declare an array of structures
    struct Student students[num];

    // Get the data for each student
    for (i = 0; i < num; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        // Add the marks to the total
        total += students[i].marks;
    }

    // Calculate the average
    avg = total / num;

    printf("The average marks of the %d students is: %.2f\n", num, avg);

    return 0;
}
