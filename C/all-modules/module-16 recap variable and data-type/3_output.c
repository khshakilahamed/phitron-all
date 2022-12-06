#include<stdio.h>
/*
1. printf()
2. putchar()
3. puts()
*/
int main()
{
    int i = 7;
    float j = 7.89;

    char ch='u';
    char str="shakil";

    printf("%d", i);
    printf("\v");
    printf("%d", j);

    putchar(ch); // for printing character
    puts(str); // for printing string;


    return 0;
}
