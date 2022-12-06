#include<stdio.h>
#include<string.h>

void sort_fun( char str[])
{
    int arr[27], i, j;

    for(i=1; i<=26; i++)
        arr[i] = 0;

    for(i=0; i<strlen(str); i++)
        arr[str[i] - 96]++;

    for(i=26; i>=1; i--)
    {
        if(arr[i] >= 1)
        {
            for(j = 1; j <= arr[i]; j++)
                printf("%c", i+96);
        }
    }
}

int main()
{
    char str[100];
    scanf("%s", str);

    sort_fun(str);

    return 0;
}
