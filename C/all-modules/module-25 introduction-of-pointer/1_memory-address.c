#include<stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    for(int i=0; i<8; i++)
    {
        printf("%p\n", &arr[i]);
    }



    return 0;
}
