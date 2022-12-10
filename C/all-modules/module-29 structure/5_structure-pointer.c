#include<stdio.h>

struct Student{
    double weight;
    int roll;
    int age;
};


int main()
{
    struct Student s = {.roll = 12, .weight = 89.4, .age=24};
    struct Student s2 = {.roll = 12, .weight = 89.4, .age=23};

    struct Student* sp;

    sp = &s;

    printf("%d\n", sizeof(struct Student));
    printf("%p\n%p\n", sp, &s2);

    printf("%d %lf\n", sp->age, sp->weight, sp->age);


    return 0;
}
