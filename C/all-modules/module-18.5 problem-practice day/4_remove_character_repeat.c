#include<stdio.h>

int main()
{
    char str[100], largest_num = 26;
    fgets(str, sizeof(str), stdin);

    int len = strlen(str), i, j, count = 0;


    for(i=0; i<len; i++)
    {
        if(str[i] != str[i+1])
        {
            printf("%c", str[i]);
        }
    }







    return 0;
}


/*
int newArr[largest_num+1];

    for(i=0; i<=largest_num; i++)
        newArr[i] = 0;

    for(i=0; i<len; i++)
    {
        int index = str[i] - 96;
        newArr[index] +=1;
    }

    for(i=1; i<=largest_num; i++)
    {
        if(newArr[i])
            printf("%c", newArr[i]+96);
    }
*/
