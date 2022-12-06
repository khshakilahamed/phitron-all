#include<stdio.h>
#include<math.h>

int main()
{
    long long int n, m;
    int i, sum = 0;
    double remainder;
    scanf("%lld", &n);

    m = n;

    while(n != 0){
        n = n/10;
        remainder = (int)((double)m/(pow(10, i))) % 10;
        sum += remainder;
        i++;
    }

    printf("%d", sum);

    return 0;
}
