#include<stdio.h>
#include<string.h>

int main()
{
    char str[102];
    scanf("%s", str);

    int i, j;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("%s\n", str);

    return 0;
}
