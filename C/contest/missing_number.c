#include<stdio.h>
int main()
{
    int t, a, b, c,d, sum, i = 0;
    scanf("%d", &t);

    while(i<t)
    {
        scanf("%d%d%d%d", &sum, &a, &b, &c);
        d = sum - (a+b+c);
        printf("%d\n", d);

        i++;
    }

    return 0;
}
