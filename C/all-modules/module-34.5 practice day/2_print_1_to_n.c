#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;


    inputFile = fopen("2_input.txt", "r");

    if(inputFile == NULL)
    {
        printf("Invalid File");
        return 0;
    }

    outputFile = fopen("2_output.txt", "w");

    int i, n;
    fscanf(inputFile, "%d", &n);

    for(i=1; i<=n; i++)
    {
        fprintf(outputFile, "%d ", i);
    }

    fclose(inputFile);
    fclose(outputFile);


    return 0;
}
