#include<stdio.h>

int main()
{
    int a = 1234, arr[3] = {3, 5, 8};
    int* p;

    p = &a;

    //printf("%d\n", &a);
    printf("%p\n", p);
    printf("%d\n", *p);

    printf("%p\n", arr);
    printf("%p\n", (arr+1));


    return 0;
}

