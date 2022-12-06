
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if(a%b == 0){
        printf("a = %d is divisible by b = %d \n", a, b);
    }
    else if(b % a == 0){
        printf("b = %d is divisible by a = %d \n", b, a);
    }
    else{
        printf("None of them are divisible by the other.");
    }



    return 0;
}
