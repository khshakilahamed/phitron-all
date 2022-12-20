#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr;
    ptr = malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }


    return 0;
}
