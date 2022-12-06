#include<stdio.h>

int main()
{
    int n, m;
    printf("Enter two positive integer: ");
    scanf("%d%d", &n,&m);

    if(n<m)
    {
        for(int i = n; i <= m; i++)
        {
            printf("%d ", i);
        }
    }
    else if(n>m)
    {
        int hour = 24;
        for(int i = n; i <= 23; i++){
            printf("%d ", i);
        }
        for(int i = 0; i <= m; i++){
            printf("%d ", i);
        }
    }


    return 0;
}



