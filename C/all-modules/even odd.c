#include<stdio.h>

int main()
{
    int a;

    printf("Enter a non-negative integer: ");
    scanf("%d", &a);

    if(a>0){
        if(a % 2 == 0){
            printf("%d is a Even number", a);
        }
        else if(a % 2 != 0){
            printf("%d is a Odd number", a);
        }
    }

    else{
        printf("Wrong input given");
    }
}
