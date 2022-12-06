#include<stdio.h>

int main()
{
    int charge, finished, n, i, backupTime = 0;
    char percentage;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &charge);

        finished = 100 - charge;


        if(finished == 0)
        {
            backupTime = 0;
        }
        else if(finished <= 20 && finished > 1)
        {
            backupTime = 3 * finished;
        }
        else if(finished <= 40 && finished > 20)
        {
            backupTime = 3 * 20;
            finished = finished - 20;
            backupTime += 2*finished;
        }
        else if(finished > 40)
        {
            backupTime = 3 * 20;
            finished = finished - 20;
            backupTime += 2* 20;
            backupTime += finished;
        }
        printf("%d minutes \n",backupTime);

        backupTime = 0;
        finished = 0;
        charge = 0;
    }





    return 0;
}
