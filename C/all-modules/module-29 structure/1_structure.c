#include<stdio.h>
#include <string.h>

struct Student{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    int a;
    char name[50]="kh. shakil";
    a=7;

//    struct Student s1={12, "Kh. Shakil", 24, 78.0};

    struct Student s;
    s.roll = 12;
    strcpy(s.name, name);
    s.age = 24;
    s.weight = 78.9;

    struct Student s2={15, "Shakil", 28, 89.5};

    printf("Student-1 info-\n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f\n", s.roll, s.name, s.age, s.weight);

    printf("\n\nStudent-2 info-\n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f\n", s2.roll, s2.name, s2.age, s2.weight);


    return 0;
}
