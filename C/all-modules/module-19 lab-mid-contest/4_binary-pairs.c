#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);

    int i = 0;
    while(i<t)
    {
        int n;
        scanf("%d ", &n);

        char string[n+2];
        fgets(string, sizeof(string), stdin);

        int len = strlen(string) - 1, j, count = 0;

        for(j=0; j<len; j++)
        {
            if((string[j] == '0' && string[j+1] == '1') || (string[j] == '1' && string[j+1] == '0'))
            {
                count++;
            }
        }

        printf("%d\n", count);

        i++;
    }




    return 0;
}
