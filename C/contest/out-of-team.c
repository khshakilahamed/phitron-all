#include<stdio.h>

int main()
{
    int n, k, i, count = 0, x;
    scanf("%d%d", &n, &k);

    for(i = 0; i<n; i++)
    {
        scanf("%d", &x);
        if(x < k)
        {
            count++;
        }
    }

    printf("%d\n", count);


    return 0;
}
