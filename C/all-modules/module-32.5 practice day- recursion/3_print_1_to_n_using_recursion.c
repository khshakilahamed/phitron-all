#include<stdio.h>

void solve(int a)
{
    if(a==0) return;

    solve(a-1);
    printf("%d ", a);
}

int main()
{
    int n;
    scanf("%d", &n);

    solve(n);


    return 0;
}
