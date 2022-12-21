#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("5_input.txt", "r");

    if(inputFile == NULL)
    {
        printf("Input file not found");
        return 0;
    }

    outputFile = fopen("5_output.txt", "w");

    int n, i, a, sum=0;
    fscanf(inputFile, "%d", &n);

    for(i=0; i<n; i++)
    {
        fscanf(inputFile, "%d", &a);
        a = a%10;
        sum += a;
    }

    fprintf(outputFile, "Sum = %d\n", sum);


    return 0;
}
