#include<stdio.h>

struct abc
{
    int x;
    int y;
};

int main()
{
    struct abc A = {0, 1};
    struct abc *ptr = &A;

//    printf("%d %d\n", A.x, A.y);
    printf("%d %d\n", ptr->x, ptr->y);

    return 0;
}
