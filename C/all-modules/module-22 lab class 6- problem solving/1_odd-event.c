#include<stdio.h>

int is_even(int n)
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d", &n);

    int result = is_even(n);

    if(result)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
