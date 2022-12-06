#include<stdio.h>
#include<string.h>

void even_odd(int n, int k);

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    even_odd(n, k);

    return 0;
}

void even_odd(int n, int k)
{
    int i;
    int numbers[n+1], evenLength=1, oddLength=0, k_th_value;

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            numbers[evenLength-1] = i;
            evenLength++;
        }
    }


    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            numbers[evenLength-1+oddLength] = i;
            oddLength++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(i==k-1)
        {
            k_th_value=numbers[i];
        }
        printf("%d ", numbers[i]);

    }

    printf("\nThe %dth element in this sequence is %d\n", k, k_th_value);




}
