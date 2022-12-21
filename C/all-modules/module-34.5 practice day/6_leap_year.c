#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("7_input.txt", "r");
    if(inputFile == NULL)
    {
        printf("input file not found");
        return 0;
    }

    outputFile = fopen("7_output.txt", "a");

    while(1)
    {
        int year;
        fscanf(inputFile, "%d", &year);


        if((year % 4 == 0) && ((year %400 == 0) || (year%100 != 0)))
        {
            fprintf(outputFile, "%d-->YES\n", year);
        }
        else
        {
            fprintf(outputFile, "%d-->NO\n",year);
        }



    }


    return 0;
}
