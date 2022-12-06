#include<stdio.h>

int main()
{
    int n, k, i, nextRoom = 101, nextFloor = 2, ans = 0;
    scanf("%d%d", &n, &k);

    for(i = 1; i<= (n*k); i++){
        ans += nextRoom;
        nextRoom += 1;
        if(i%k == 0) {
            nextRoom = (100 * nextFloor) + 1;
            nextFloor += 1;
        }
    }

    printf("%d", ans);


    return 0;
}
