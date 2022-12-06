#include<stdio.h>

int my_gcd(int a, int b)
{
    for(int i=a; i>=1; i--)
    {
        if(a%i==0 && b%i == 0)
        {
            return i;
        }
    }

}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    int ans = my_gcd(a, b );


    printf("The GCD is %d\n", ans);


    return 0;
}
