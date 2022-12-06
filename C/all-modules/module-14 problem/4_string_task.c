// https://codeforces.com/problemset/problem/118/A

#include<stdio.h>
#include<string.h>

int main()
{
    char word[102];
    // gets(word);
    fgets(word, sizeof(word), stdin);

    int i;
    for(i=0; i<strlen(word)-1; i++)
    {
        if(word[i]>= 'A' && word[i]<='Z')
        {
            word[i] += 32;
        }
        if(!(word[i] == 'a' ||  word[i] == 'o' || word[i] == 'y' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i'))
        {
            printf(".%c", word[i]);
        }
    }


    return 0;
}
