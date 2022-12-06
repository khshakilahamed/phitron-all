#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    scanf("%d", &n);


    if(n>0)
    {
        for(i=n; i>= -n; i--)
            printf("%d ", i);
    }
    else if(n<0)
    {
        for(i=n; i <= abs(n); i++)
            printf("%d ", i);
    }



    return 0;
}
