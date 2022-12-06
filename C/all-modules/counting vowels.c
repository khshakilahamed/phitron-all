#include<stdio.h>

int main()
{
    char sen[1001];

    //gets(sen);
    fgets(sen, sizeof(sen), stdin);

    int i = 0, counter = 0;
    while(sen[i] != '\0')
    {
        // vowel hole counter++
        if(sen[i] == 'a')
            counter++;
        else if(sen[i] == 'e')
            counter++;
        else if(sen[i] == 'o')
            counter++;
        else if(sen[i] == 'i')
            counter++;
        else if(sen[i] == 'u')
            counter++;

        i++;
    }

    printf("%d", counter);


    return 0;
}
