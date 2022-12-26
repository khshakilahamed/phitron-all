#include<stdio.h>

int main()
{
    int n, s, i, j;
    scanf("%d%d", &n, &s);

    int sum=0;
    for(i=1; i<=s; i++)
    {
        sum= n + 2*i;

        if(sum == s)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
