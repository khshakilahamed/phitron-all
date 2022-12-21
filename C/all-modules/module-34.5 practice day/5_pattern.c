#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("6_input.txt", "r");

    if(inputFile == NULL)
    {
        printf("Input File Not Found");
        return 0;
    }

    outputFile = fopen("6_output.txt", "w");

    int n, i, j;
    fscanf(inputFile, "%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            fprintf(outputFile," ");
        }
        for(j=1; j<=n; j++)
        {
            fprintf(outputFile,"#");
        }
        fprintf(outputFile,"\n");
    }




    return 0;
}
