#include<stdio.h>
int g = 7; // global variable
void add_two_nums()
{
    int a, b;
    int g = 13; // local variable
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d\n", sum);
    printf("local value of a local variable %d\n", g);
    {
        // getting global variable
        extern int g;
        printf("global value of a global variable %d\n", g);
    }

}

int main()
{
    add_two_nums();


    return 0;
}

