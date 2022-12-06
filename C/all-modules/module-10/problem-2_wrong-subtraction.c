// https://codeforces.com/problemset/problem/977/A

#include<stdio.h>

int main()
{
    int num, n, i;
    scanf("%d%d", &num, &n);

    for(i = 0; i < n; i++)
    {
        if(num % 10 != 0)
        {
            num = num - 1;
        }
        else if(num % 10 == 0)
        {
            num = num/10;
        }
    }

    printf("%d", num);


    return 0;
}
