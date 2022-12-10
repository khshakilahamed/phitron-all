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
    scanf("%d%s%d%f", &s.roll, &s.name, &s.age, &s.weight);

//    struct Student s2={15, "Shakil", 28, 89.5};
    struct Student s2={.weight=84.0, .roll=12, .age=23, .name="kh.shakil"};

    printf("Student-1 info-\n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f\n", s.roll, s.name, s.age, s.weight);

    printf("\n\nStudent-2 info-\n");
    printf("Roll = %d\nName = %s\nAge = %d\nWeight = %f\n", s2.roll, s2.name, s2.age, s2.weight);


    return 0;
}
