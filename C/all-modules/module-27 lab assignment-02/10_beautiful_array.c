#include<stdio.h>
#include<math.h>

int beautiful_array_func(int *a, int n)
{
    int i, j, count=0;

    for(i=0; i<n; i++)
    {
        int *num = a+i;

        j=0;
        while(*num != 0)
        {
            if(*num %10 == 7)
                count++;

            *num = *num/10;

            j++;
        }
    }

    if(count == ceil(n/2))
        return 1;
    else
        return 0;

}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i, j;

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int is_beautiful = beautiful_array_func(arr, n);

    if(is_beautiful)
        printf("Beautiful\n");
    else
        printf("Ugly");


    return 0;
}
