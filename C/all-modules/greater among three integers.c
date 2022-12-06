#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 == num2 && num1 > num3)
    {
        printf("num1 and num2 both are bigger");
    }
    else if(num1 == num3 && num2 > num1)
    {
        printf("num1 and num3 both are bigger");
    }
    else if(num2 == num3  && num1 > num2)
    {
        printf("num2 and num3 both are bigger");
    }
    else if(num1 > num2 && num1 > num3)
    {
        printf("num1 is bigger", num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("num2 is bigger", num2);
    }
    else if(num3 > num1 && num3 > num2)
    {
        printf("num3 is bigger", num3);
    }
    else if(num1 == num2 && num2 == num3)
    {
        printf("They are equal");
    }



    return 0;
}

