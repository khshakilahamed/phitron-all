#include<stdio.h>

struct Student
{
    int roll;
    char name[40];
    int marks;
};

int main()
{
    struct Student s1;

    printf("Enter information: \n");
    printf("Enter name: ");
    scanf("%s", &s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%d", &s1.marks);


    printf("Displaying information: \n");
    printf("Name: %s\nRoll Number: %d\nMarks: %d\n", s1.name, s1.roll, s1.marks);

    return 0;
}
