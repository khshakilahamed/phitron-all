// https://codeforces.com/problemset/problem/281/A

#include<stdio.h>

int main()
{
    char word[1000];
    fgets(word, sizeof(word), stdin);

    if(word[0] >= 'a' && word[0] <='z')
    {
        word[0] -= 32;
        puts(word);
    }
    else{
        puts(word);
    }


    return 0;
}
