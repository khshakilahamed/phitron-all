#include<stdio.h>

void warning()
{
    printf("Fire in the building! Please evacuate!\n");
}

void solve()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
}

int main()
{
    int t, i;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        solve();
    }
    // warning();
    return 0;
}
