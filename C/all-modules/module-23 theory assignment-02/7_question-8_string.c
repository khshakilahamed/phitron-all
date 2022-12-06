#include<stdio.h>
#include<string.h>

int main()
{
    char str[102];
    scanf("%s", str);

    int n;
    scanf("%d", &n);

    int len = strlen(str), i;
    printf("%d\n", len);

    for(i=0; i<len; i++)
    {
        int value = str[i]+n;

        if(value > 122)
        {
            value = value - 122 + 96;
            printf("%c", value);
        }
        else{
            printf("%c", value);
        }
    }

    return 0;
}
