#include<stdio.h>
#include<math.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("4_input.txt", "r");

    if(inputFile == NULL)
    {
        printf("Input file not found");
        return 0;
    }

    outputFile = fopen("4_output.txt", "w");

    int i=1, t, j, k;
    fscanf(inputFile, "%d", &t);

    while(i<=t)
    {
        int n;
        fscanf(inputFile, "%d", &n);

        if(n>0)
        {
            for(j=n; j>= -n; j--)
            {
                fprintf(outputFile, "%d ", j);
            }
            fprintf(outputFile, "\n");
        }

        else
        {
            for(j=n; j<= abs(n); j++)
            {
                fprintf(outputFile, "%d ", j);
            }
            fprintf(outputFile, "\n");
        }


        i++;
    }


    return 0;
}
