#include<stdio.h>

int main()
{
    int chocolates, pack;
    printf("Enter the number of chocolates: ");
    scanf("%d", &chocolates);

    pack = chocolates;

    while(pack >= 4)
    {
        chocolates += (pack/4);
        pack = (pack/4) + (pack % 4);
    }

    printf("The total number of chocolates: %d", chocolates);

    return 0;
}
