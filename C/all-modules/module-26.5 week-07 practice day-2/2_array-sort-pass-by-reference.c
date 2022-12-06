#include<stdio.h>

void bubble_sort(int array_size, int *array_ref)
{

    int i, j;

    for(i=0; i<array_size; i++)
    {
        for(j=0; j<array_size - 1; j++)
        {
            if(*array_ref+i > *array_ref+j)
            {
                int temp;
//                temp = *array_ref+i;
//                *array_ref+i = *array_ref+j;
//                *array_ref+j = temp;
                printf("%d ", *array_ref+i);
            }
        }
    }

}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[] = {2, 5 , 4};

    bubble_sort(n, arr);


    int i, j;


//    for(i=0; i<n; i++)
//    {
//        printf("%d", arr[i]);
//    }


    return 0;
}
