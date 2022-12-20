#include<stdio.h>

int main()
{
    FILE * inputFile;
    FILE *outputFile;

    inputFile = fopen("3_input.txt", "r");
    outputFile = fopen("3_output.txt", "w");

    if(inputFile == NULL)
    {
        fprintf(outputFile, "Not Found\n");
        return 0;
    }


    int n;
    fscanf(inputFile, "%d", &n);
    int sum =0;

    for(int i = 0; i<n ; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum += a;
    }

    fprintf(outputFile, "Sum -> %d\n", sum);



    return 0;
}
