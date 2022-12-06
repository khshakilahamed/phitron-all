#include<stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int uniqueArray[n];
    int uniqueArrayIndex = 0;

    for(i = 0; i<n; i++)
    {
        int select = arr[i];
        int found = 0;

        for(j = 0; j<n; j++)
        {
            if(uniqueArray[j] == select)
            {
                found=1;
            }
        }

        if(found == 0)
        {
            uniqueArray[uniqueArrayIndex] = select;
            uniqueArrayIndex++;
        }
    }

    for(i = 0; i<uniqueArrayIndex; i++)
    {
        printf("%d ", uniqueArray[i]);
    }


    return 0;
}
