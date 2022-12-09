#include<stdio.h>

int main()
{
    int a = 7, *pi;
    double b = 8.65, *pd;
    char c;

    b = (double)25/4;

    pi = &a;
    pd = (double*)pi;

    printf("%lf\n", b);
    printf("%p %p\n", pi, pd);


    return 0;
}
