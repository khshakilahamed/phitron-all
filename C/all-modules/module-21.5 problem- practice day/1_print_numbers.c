#include<stdio.h>

void print_numbers(int n);

int main()
{
    int n;
    scanf("%d", &n);

    print_numbers(n);


    return 0;
}



void print_numbers(int n)
{
    int i;
    if(n>0)
    {
        for(i = n; i>=-n; i--)
        {
            printf("%d ", i);
        }
    }
    else if(n<0)
    {
        for(i = n; i<= (n * (-1)) ; i++)
        {
            printf("%d ", i);
        }
    }
}
