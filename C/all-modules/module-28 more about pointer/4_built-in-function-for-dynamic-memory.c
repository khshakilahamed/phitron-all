#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int *ptr;

    // malloc
//    ptr = (int*) malloc(n*sizeof(int)); // malloc gets memory size as byte

    // calloc
    ptr = (int*) calloc(n, sizeof(int)); // calloc gets memory size as byte


    if(ptr==NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d", (ptr+i));
        }

        for(i=0; i<n; i++)
        {
//        printf("%d\n", *(ptr+i));
            printf("%d\n", ptr[i]);
        }

//    ptr=realloc(ptr, (n+5)*sizeof(int));
    }



    free(ptr);

    return 0;
}

