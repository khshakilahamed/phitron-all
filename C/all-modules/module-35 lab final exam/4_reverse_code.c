#include<stdio.h>

int main()
{
    int t, i = 1;
    scanf("%d", &t);


    while(i<=t)
    {
        int n;
        scanf("%d", &n);

        while(n!=0)
        {
            int rem = n%10;
            n=n/10;

            printf("%c", rem+96-32);

        }

        printf("\n");

        i++;
    }


    return 0;
}
