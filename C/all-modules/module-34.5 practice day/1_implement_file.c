#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("1_input.txt", "r");
    outputFile = fopen("1_output.txt", "w");

    while(1)
    {
        char ch = fgetc(inputFile);

        if(ch==EOF)
        {
            break;
        }

        fputc(ch, outputFile);
    }




    return 0;
}
