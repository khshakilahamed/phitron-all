#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int len = strlen(str), i, sum=0;

    for(i=0; i<len; i++)
    {
        sum += str[i]-96;
    }

    //printf("%d", sum);

    int count = 1, index;
    for(i=1; i<=sum/2; i++)
    {
        if(2*i == sum)
        {
            count = 0;
            index = i;
            break;
        }
    }


    if(count == 0)
    {
        printf("YES\n");
        printf("Cost = 2^%d\n", i);
    }
    else
    {
        printf("NO");
    }


    return 0;
}
