// https://codeforces.com/problemset/problem/1760/A?f0a28=1

#include<stdio.h>

int main()
{
    int t, i, a, b, c;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);

        if(a>b && a>c)
        {
            if(b>c)
                printf("%d\n", b);
            else
                printf("%d\n", c);
        }
        else if(b>a && b>c)
        {
            if(a>c)
                printf("%d\n", a);
            else
                printf("%d\n", c);
        }
        else
        {
            if(a>b)
                printf("%d\n", a);
            else
                printf("%d\n", b);
        }
    }


    return 0;
}
