#include<stdio.h>


int myfriend(int a)
{
    printf("Pera nai! chill!\n");
    return a*2;
}


int main()
{
    int a;
    a = myfriend(2);

    printf("%d\n", a);

    return 0;
}
