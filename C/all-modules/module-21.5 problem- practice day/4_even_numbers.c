#include<stdio.h>

void even_numbers(int n);

int main()
{
    int n;
    scanf("%d", &n);

    even_numbers(n);


    return 0;
}


void even_numbers(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
            printf("%d ", i);
    }
}
