#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n >= 1){
        for(int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else if(n < 0)
    {
        for(int i = 1; i != n - 1; i--){
            printf("%d ", i);
        }
    }

    return 0;
}
