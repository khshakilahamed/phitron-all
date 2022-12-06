#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int len=strlen(str), count = 0, i;
    for(i=0;i<len;i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i] == 2 || str[i] == 9))
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        printf("YES");
    }
    else
    {
        printf("N0");
    }


    return 0;
}
