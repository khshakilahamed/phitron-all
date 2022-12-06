#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int *num1, *num2;

    num1 = &a;
    num2 = &b;

    printf("%0.3f \n", (*num1+ *num2) / 2.0);


    //printf("Average: %f\n", (*a + *b)/ 2);


    return 0;
}
