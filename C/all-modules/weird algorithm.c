#include<stdio.h>

int main()
{
    long long int n;
    //printf("Enter a integer number: ");
    scanf("%lld", &n);

    printf("%lld ", n);
    while(n > 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else if(n % 2 != 0)
        {
            n *= 3;
            n += 1;
        }
        printf("%lld ", n);
    }


    return 0;
}
