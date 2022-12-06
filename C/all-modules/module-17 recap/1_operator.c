#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    float s = (float)(a+b+c)/2;
    printf("Half perimeter %f ", s);

    double area;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\nThe area of a triangle is: %lf", area);




    return 0;
}
