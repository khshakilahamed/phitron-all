// https://codeforces.com/problemset/problem/112/A

#include<stdio.h>

int main()
{
    char string1[102], string2[102], i;
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    int len = strlen(string1)-1;

    for(i=0; i<len; i++)
    {
        if(string1[i]>= 'A' && string1[i]<= 'Z')
        {
            string1[i] += 32;
        }

        if(string2[i]>= 'A' && string2[i]<= 'Z')
        {
            string2[i] += 32;
        }
    }

    int same = 1;

    for(i=0; i<len; i++)
    {
        if(string1[i]<string2[i])
        {
            same = 0;
            printf("-1\n");
            break;
        }
        else if(string1[i]>string2[i])
        {
            same = 0;
            printf("1\n");
            break;
        }
    }

    if(same == 1)
    {
        printf("0\n");
    }


    return 0;
}


/*
#include<stdio.h>

int main()
{
    int string1[102], string2[102], i;
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    int len = strlen(string1)-1;

    for(i=0; i<len; i++)
    {
        if(string1[i]>= 'A' && string1[i]<= 'Z')
            string1[i] += 32;
        if(string2[i]>= 'A' && string2[i]<= 'Z')
            string2[i] += 32;
    }

    int same = 1;

    for(i=0; i<len; i++)
    {
        if(string1[i]<string2[i])
        {
            printf("-1\n");
            return 0;
        }
        else if(string1[i]>string2[i])
        {
            printf("1\n");
            return 0;
        }
    }

    printf("0\n");


    return 0;
}
*/
