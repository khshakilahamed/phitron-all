#include<stdio.h>

int main()
{
    char string[100];
    int vowel = 0, consonant = 0, i;
    gets(string);

    for(i = 0; i < strlen(string); i++)
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }

    printf("Vowel- %d \nConsonant- %d", vowel, consonant);



    return 0;
}
