#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x, y;
    char c1, c2;
    scanf("%d%c%d%c",&x, &c1,&y, &c2);
    
    printf("%d%%", x*y);
    return 0;
}
