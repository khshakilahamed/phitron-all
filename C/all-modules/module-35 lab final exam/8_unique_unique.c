#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n+1];
    int i;

    for(i=0; i<n+1; i++)
    {
        scanf("%c", &str[i]);
    }


    int arr[27], unique=0;

    for(i=1; i<=26; i++)
    {
        arr[i] = 0;
    }
    for(i=0; i<n+1; i++)
    {
        arr[str[i] - 96] += 1;
    }

    for(i=1; i<=26; i++)
    {
        if(arr[i] == 1)
        {
            unique++;
        }
    }

    printf("%d\n", unique);


    return 0;
}
