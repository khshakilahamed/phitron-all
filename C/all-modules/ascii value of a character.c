// Write a C program to take a character variable and input and show the corresponding ASCII value of that character

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The ASCII value of %c is: %d", ch, ch);

    return 0;
}
