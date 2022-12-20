#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int arr[27], i, j;
    int len = strlen(s);

    for(i=0; i<=27; i++)
    {
        arr[i] = 0;
    }

    for(i=0; i<=len-1; i++)
    {
        arr[s[i] - 96] += 1;
    }

    for(i=1; i<=26; i++)
    {
        if(arr[i]>=1)
        {
            for(j=0; j<arr[i]; j++)
                printf("%c", i+96);

        }
    }


    return 0;
}
