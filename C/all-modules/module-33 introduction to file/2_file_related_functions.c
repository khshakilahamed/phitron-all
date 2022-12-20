#include<stdio.h>

int main()
{
    FILE *inputFile;
    inputFile = fopen("2_input.txt", "r");

    if(inputFile == NULL)
    {
        printf("No File Found\n");
        return 0;
    }

//    char ch = fgetc(inputFile);
//    printf("%c", ch);

    FILE *outputFile;
    outputFile = fopen("2_output.txt", "w");

    while(1)
    {
        char ch = fgetc(inputFile);
        if(ch == EOF)
        {
            break;
        }
        fputc(ch, outputFile);
//        printf("%c", ch);
    }


    return 0;
}
