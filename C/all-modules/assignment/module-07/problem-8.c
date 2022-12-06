#include<stdio.h>

int main()
{
    int a, b, i= 0, num1, num2, gcd, lcm;
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
        lcm = (num1 * num2)/ gcd;
        printf("The LCM of %d and %d is %d", num1, num2, lcm);
    }

    return 0;
}
