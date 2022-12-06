#include<stdio.h>
#include<string.h>

int main()
{
    int n, i = 0;
    scanf("%d ", &n);

    char word[25];
    while(i < n)
    {
        //word[0] = '\0';

        fgets(word, sizeof(word), stdin);

        int length = strlen(word) - 1;

        int j, k, count=0;
        for(j=0, k=length-1; j<length, k>=0; j++, k--)
        {
            if(word[j] != word[k])
                {
                    count++;
                    break;
                }
        }

        if(count==1)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if(length>7)
            {
                printf("Case #2: %c%d%c\n", word[0], length-2, word[length-1]);
            }
            else
            {
                printf("Case #3: %s", word);
            }
        }

        i++;
    }




    return 0;
}
