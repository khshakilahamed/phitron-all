#include<stdio.h>

void solve(int a)
{
    if(a==0) return;

    printf("%d ", a);

    solve(a-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    solve(n);


    return 0;
}

