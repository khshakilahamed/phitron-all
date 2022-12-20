#include<stdio.h>

int power(int n, int t, int m)
{
    if(t==m) return 1;

    int poww = power(n, t+1, m);
    return n*poww;
}

int main()
{
    int n, m;
    scanf("%d%d",&n, &m);

    int power_value = power(n, 0, m);

    printf("%d\n", power_value);


    return 0;
}
