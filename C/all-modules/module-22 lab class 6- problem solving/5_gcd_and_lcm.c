#include<stdio.h>

int gcd(int m, int n)
{
    int l,s, i;
    if(m>n)
    {
        l=m;
        s=n;
    }
    else{
        l=n;
        s=m;
    }

    for(i=s; i>=1; i--)
    {
        if(l%i == 0 && s%i == 0)
        {
            return i;
        }
    }
}

int lcm(int m, int n)
{

    return (m*n)/gcd(m,n);

    /*
    int i;
    for(i=m;i<=(m*n);i++)
    {
        if(i%m == 0 && i%n == 0)
            return i;
    }

    */


    /*

    for(i=m*n;i>=m; i--)
    {
        if(i%m == 0 && i%n == 0)
            return i;
    }
    */
}

int main()
{
    int a, b; // a= 7, b=14
    scanf("%d %d", &a, &b);


    int ans = gcd(a, b);
    int ans2 = lcm(a, b);

    printf("GCD is %d\n", ans);
    printf("LCM is %d\n", ans2);


    return 0;
}
