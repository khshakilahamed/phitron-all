#include<stdio.h>

void func(int x, int y, int *p, int *q)
{
    *p = x>y ? x: y;
    *q = x<y ? x:y;

//    if(x>y)
//    {
//        *p = x;
//        *q = y;
//    }
//    else
//    {
//        *p = y;
//        *q = x;
//    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int large, small;



    func(a, b, &large, &small);
    printf("%d %d\n", large, small);

    return 0;
}
