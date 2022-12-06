#include<stdio.h>

int main()
{
    int base, height;

    printf("Enter the base of a triangle: ");
    scanf("%d", &base);
    printf("Enter the height of triangle: ");
    scanf("%d", &height);

    float area = 0.5 * base * height;

    printf("The area of the triangle is: %f", area);

    return 0;
}
