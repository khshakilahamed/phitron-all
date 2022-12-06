#include<stdio.h>

int main()
{
    // code for calculating the area(khetrofol) of a britto

    int radius;
    printf("Enter the radius of a circle: ");
    scanf("%d", &radius);

    float area;
    area = 3.1416 * radius * radius;

    printf("The area of the circle is: %f", area);

    return 0;
}
