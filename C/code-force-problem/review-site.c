// https://codeforces.com/contest/1511/problem/A

#include<stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);

    int n;
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        int reviewers[n], x, count = 0;
        for(j = 0; j < n; j++)
        {
            scanf("%d", &x);
            if(x % 2 != 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }


    return 0;
}
