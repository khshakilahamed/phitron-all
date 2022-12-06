#include<stdio.h>

int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}


int main()
{
    int x, y, z;
    scanf("%d%d", &x, &y);


    int result = add_three_nums(x, y, z=0);

    printf("Result: %d\n", result);


    return 0;
}
