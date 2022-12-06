#include<stdio.h>
/*
1. scanf
2. fscanf
3. getchar
4. gets
*/
int main()
{
    int a;
    float b;

    char ch;
    char ch2;

    //scanf("%d,%f", &a, &b); // for comma separate. if you want to get input with comma
    //scanf("%d %f", &a, &b);


    ch = getchar(); // for getting input
    getchar() // for avoiding enter
    ch2 = getchar(); // for getting input



    // printf("%d %f", a, b);

    printf("%c and %c", ch, ch2);



    return 0;
}
