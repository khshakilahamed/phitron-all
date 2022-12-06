#include<stdio.h>

void grade(int mark);

int main()
{
    int n;
    scanf("%d", &n);

    grade(n);

    return 0;
}

void grade(int mark)
{
    if(mark>=80 && mark<=100)
        printf("A\n ");
    else if(mark>=60 && mark<=79)
        printf("B\n");
    else if(mark>=40 && mark<=59)
        printf("C\n");
    else if(mark<40)
        printf("F\n");
}
