#include<stdio.h>

int solve(int a)
{
    if(a==0) return 0;

    int s = solve(a-1);

    return a+s;

}

int main()
{
    int n;
    scanf("%d", &n);

    int value = solve(n);

    printf("%d\n", value);


    return 0;
}


