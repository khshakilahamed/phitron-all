#include<stdio.h>

int main()
{
    long long int n;
    int i = 1, count = 0;
    scanf("%lld", &n);

    while(n != 0){
        count++;
        n = n/10;
        i++;
    }

    printf("%d digits", count);

    return 0;
}
