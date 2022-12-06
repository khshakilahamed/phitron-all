#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);


    char mainStr[102];
    int i = 0;
    while(i<n)
    {
        char str[15];

        str[0]='\0';
        scanf("%s", str);

        int len=strlen(str);
        int j = 0;

        if(i==0)
        {
            for(j=0; j<len; j++)
            {
                mainStr[j] = str[j];
            }
        }
        else
        {
            int mainStrLen = strlen(mainStr);
            for(j=0; j<len+2; j++)
            {
                if(j==0)
                {
                    mainStr[mainStrLen+j] = ' ';
                }
                else
                {
                    mainStr[mainStrLen+j] = str[j-1];
                }
            }
        }

        i++;
    }
    printf("%s", mainStr);




    return 0;
}
