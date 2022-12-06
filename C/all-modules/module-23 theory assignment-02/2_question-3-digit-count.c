#include<stdio.h>
#include<string.h>

void checking(char str[]);

int main()
{
    char str[102];
    scanf("%s", str);

    checking(str);

    return 0;
}



void checking(char str[])
{
    char one, nine, seven;
    int i;

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == '1')
            one=str[i];
        else if(str[i] == '9')
            nine = str[i];
        else if(str[i] == '7')
            seven =str[i];
    }

    if(one == '1' && nine == '9' && seven == '7')
        printf("All %c, %c and %c are present in the number\n", one, nine, seven);
    else
        printf("No\n");
}
