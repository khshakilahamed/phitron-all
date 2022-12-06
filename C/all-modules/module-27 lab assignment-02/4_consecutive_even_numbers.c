#include<stdio.h>

int main()
{
    int n, t;
    scanf("%d", &t);

    int i;

    for(i = 0; i<t; i++)
    {
        scanf("%d", &n);

        int value = (n-12)/8;

        printf("%d %d %d %d\n", 2*value, ((2*value) + 2), ((2*value) + 4), ((2*value) + 6));
    }




    return 0;
}
