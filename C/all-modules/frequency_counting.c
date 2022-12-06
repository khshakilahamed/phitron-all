#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "bbbbaccddd";
    int largest_number = 26, i, j;

    char freq[largest_number+1];

    for(i=0; i<=largest_number; i++)
    {
        freq[i]=0;
    }

    int len = strlen(str);

    for(i=0; i<len; i++)
    {
        freq[(str[i] - 'a') + 1]++;
    }

    int total = 0;
    for(i=0; i<=largest_number; i++)
    {
        if(freq[i] >=1 )
            total++;
    }

    printf("%d \n", total);

    int next = 0;
    while(next != total)
    {
        int max = -1, index= -1;
        char ch;

        for(i=0; i<=largest_number; i++)
        {
            if(freq[i]>max)
            {
                max = freq[i];
                ch = i+96;
                index = i;
            }
        }

        for(i=0; i<max; i++)
        {
            printf("%c", ch);
        }

        freq[index]=0;
        next++;
    }


    return 0;
}
