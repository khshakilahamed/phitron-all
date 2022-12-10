#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    double marks;
};


void printStudent(int n, struct Student s)
{
    printf("\nInformation of Student %d\n", n);
    printf("Roll -> %d\n", s.roll);
    printf("Name -> %s\n", s.name);
    printf("Mark -> %lf\n", s.marks);
}

int main()
{
    struct Student cls[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%s", &cls[i].name);
        scanf("%lf", &cls[i].marks);
    }

    for(int i=0; i<5; i++)
    {
        if(cls[i].roll % 2 == 0)
            printStudent(i, cls[i]);
    }



    return 0;
}



/**
input ----------

12
shakil
65
32
oebraj
24
13
Jawad
84
15
Rizvi
93
31
Hasib
40.0

*/
