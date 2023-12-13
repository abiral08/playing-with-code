#include <stdio.h>

// Define the union
union Student
{
    int roll_no;
    char name[50];
    char address[100];
    char phone_no[15];
};

int main()
{
    // Declare an array of unions
    union Student students[10];

    // Get the data for each student
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", &students[i].name);
        printf("Enter the address of student %d: ", i + 1);
        scanf("%s", &students[i].address);
        printf("Enter the phone number of student %d: ", i + 1);
        scanf("%s", &students[i].phone_no);
    }

    // Display the records
    for (int i = 0; i < 10; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Roll number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Phone number: %s\n", students[i].phone_no);
    }

    return 0;
}
