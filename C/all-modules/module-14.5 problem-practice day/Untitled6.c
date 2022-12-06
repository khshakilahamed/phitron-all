
#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int digit, sum=0;

    while(num != 0)
    {
        digit = num%10;
        sum += digit;
        num = num/10;
    }
    printf("%d ", sum);


    return 0;
}
