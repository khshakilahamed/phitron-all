#include<stdio.h>

int main()
{
    int a = 5;
    int* p=&a;

    printf("%d\n", a);
    printf("%p\n", p);

    int** q = &p;

    printf("%p\n", q);

    **q = 7;

    printf("%d\n", a);

    return 0;
}


