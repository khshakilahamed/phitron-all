// https://codeforces.com/problemset/problem/231/A

#include<stdio.h>

int main()
{
    int n, i, j, x, count = 0, implement = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &x);
            if(x == 1)
            {
                count++;
                if(count >= 2)
                {
                    implement++;
                }
            }
        }
        count = 0;
    }

    printf("%d", implement);

    return 0;
}
