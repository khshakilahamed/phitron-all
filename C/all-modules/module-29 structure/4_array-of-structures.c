#include<stdio.h>
#include <string.h>

struct Student{
    double weight;
    int roll;
};

int main()
{
    int i;
    struct Student s[10];

    for(i=0; i<10; i++)
    {
        s[i].roll = 11+i;
        s[i].weight = 55.08 + i+3;
    }

    for(i=0; i<10; i++)
    {
        printf("%d %lf\n", s[i].roll, s[i].weight);
    }


    return 0;
}
