#include<stdio.h>

void fibo(int n)
{
    int first_value = 0;
    int second_value = 1;
    int next_value;

    if(n==1)
    {
        printf("0");
    }
    else if(n==2)
    {
        printf("%d, %d", first_value, second_value);
    }
    else if(n>2)
    {
        printf("%d, %d ", first_value, second_value);

        for(int i=3; i<=n; i++)
        {
            next_value = first_value + second_value;
            printf(", %d", next_value);
            first_value = second_value;
            second_value = next_value;
        }
    }

}

int main()
{
    int n;
    scanf("%d", &n);

    fibo(n);

    return 0;
}
