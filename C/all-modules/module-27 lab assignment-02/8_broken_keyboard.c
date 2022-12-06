#include<stdio.h>
#include<string.h>


void characterss(char str[])
{
    int i, j;
    for(i=0; i<strlen(str); i++)
    {
        if(i==1)
        {
            printf("%c%c", str[i], str[i]);
        }
        else if(i==3)
            printf("%c%c", str[i], str[i]);
        else
            printf("%c", str[i]);

    }
}


int main()
{
    char str[100];

    scanf("%s", str);


    characterss(str);


    return 0;
}
