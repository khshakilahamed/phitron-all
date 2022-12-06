#include<stdio.h>

int main()
{
    int n, i = 2;
    scanf("%d", &n);

    printf("The factors of %d are: 1, ", n);
    while(i  <= n/2){
        if(n % i == 0){
            printf("%d, ", i);
        }
        i++;
    }
    printf("%d", n);

    return 0;
}
