#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i, j, sum = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + (arr[i]%10);
    }

    printf("%d\n", sum);


    return 0;
}
