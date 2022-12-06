#include<stdio.h>

int S(int n)
{
    if(n==1)
        return 1;
    else
        return S(n-1) + n;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i;

    int sum = S(n);

    printf("%d\n", sum);


    return 0;
}
