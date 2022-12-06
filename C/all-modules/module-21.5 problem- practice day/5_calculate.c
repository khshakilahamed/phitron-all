#include<stdio.h>

void calculate(char ch);

int main()
{
    char ch;
    scanf("%c", &ch);

    calculate(ch);

    return 0;
}

void calculate(char ch)
{
    int a, b;
    scanf("%d%d", &a, &b);

    if(ch== '+')
        printf("%d\n", a+b);
    else if(ch == '-')
        printf("%d\n", a-b);
    else if(ch == '*')
        printf("%d\n", a*b);
    else if(ch == '/')
        printf("%d\n", a/b);
}
