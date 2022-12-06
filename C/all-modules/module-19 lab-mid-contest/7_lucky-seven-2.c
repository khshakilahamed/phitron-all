#include<stdio.h>
#include<string.h>

int main()
{
    int n, i = 0;
    scanf("%d ", &n);

    while(i < n)
    {
        //word[0] = '\0';
        char word[25];

        //fgets(word, sizeof(word), stdin);
        scanf("%s", word);

        int length = strlen(word);

        int j, count=0;
        for(j=0; j<length; j++)
        {
            if(word[j] != word[length-1-j])
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
                printf("Case #3: %s\n", word);
            }
        }

        i++;
    }




    return 0;
}

