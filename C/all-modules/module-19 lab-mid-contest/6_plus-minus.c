#include<stdio.h>
#include<string.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    char s[n+1];
    scanf("%s", s);

    int len = strlen(s);
    int arr[len], plus = 0, minus = 0;

    for(i=0; i<len; i++)
    {
        arr[i] = 0;
    }

    for(i=0; i<len; i++)
    {
        if(s[i] == '+')
        {
            plus++;
            arr[i] = plus;
            minus = 0;
        }
        else if(s[i] == '-')
        {
            minus++;
            arr[i] = minus;
            plus=0;
        }
    }

    int max = arr[0];
    for(i=1; i<len; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }

    printf("%d\n", max);


    return 0;
}
