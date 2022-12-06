#include<stdio.h>

int main()
{
    int a, b, num1, num2, i= 0, gcd;
    scanf("%d%d", &a, &b);

    num1 = a;
    num2 = b;


    if( a == 0 || b == 0){
        printf("Value must be non-zero");
    }
    else{
        while(a != 0 || b != 0){
            if(a > b){
                a = a%b;
                if(a == 0){
                    gcd = b;
                    break;
                }
            }
            else if(b > a){
                b = b%a;
                if(b == 0){
                    gcd = a;
                    break;
                }
            }
        }
        printf("The GCD of %d and %d is %d", num1, num2, gcd);
    }
    return 0;
}
