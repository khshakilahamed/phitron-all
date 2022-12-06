#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int i = 0, len=0;
    while(s[i] != '\0')
    {
        i++;
        len++;
    }

    for(int i = len-1; i>=0; i--)
    {
        printf("%c", s[i]);
    }



    return 0;
}
