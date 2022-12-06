#include<stdio.h>

int main()
{
    int n, x, needed = 0;
    scanf("%d", &n);

    int marks[n + 1];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    int  highestMark = marks[0];

    for(int i = 1; i < n; i++)
    {
        if(highestMark < marks[i])
        {
            highestMark = marks[i];
        }
    }

    for(int i = 0; i< n; i++)
    {
        printf("%d ", highestMark - marks[i]);
    }

    return 0;
}
