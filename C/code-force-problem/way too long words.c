// https://codeforces.com/problemset/problem/71/A

#include<stdio.h>
#include<string.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);

    while(i < n)
    {
        char word[1000];
        gets(word);

        int length = strlen(word) - 1;

        if(length > 10)
        {
            printf("%c%d%c\n", word[0], length-2, word[length-1]);
        }
        else
        {
            puts(word);
        }

        i++;
    }






    return 0;
}
