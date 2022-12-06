#include<stdio.h>
#include<string.h>

int main()
{
    char string[100], flag=0;
    gets(string);

    int length = strlen(string);
    char newString[100];

    for(int i = length-1; i >= 0; i--)
    {
        if(string[i] == string[length-i-1])
        {
            flag++;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Not palindrom");
    }
    else
    {
        printf("Palindrom");
    }




    return 0;
}
