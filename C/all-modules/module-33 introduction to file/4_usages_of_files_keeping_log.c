#include<stdio.h>

int main()
{
    FILE *logFile = fopen("4_log.txt", "a");
    FILE *inputFile = fopen("4.input.txt", "r");

    if(inputFile == NULL)
    {
        fprintf(logFile, "Input file not found at 03.22PM\n");
    }

    fprintf(logFile, "Hello at 3:54pm\n");


    return 0;
}
