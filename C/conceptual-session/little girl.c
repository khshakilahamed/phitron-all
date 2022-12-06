
/*
Little girl A is learning how to decrease a number by one,
but she does it wrong with a number consisting of two or more digits.
She subtracts one from a number by the following way-

>> if the last digit of the number is non-zero, she decrease the number by one;
>> if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

You are given an integer number n. A will subtract one from it K times.
Your task is to print the result after all K subtractions.

It is guaranteed that the result will be a positive integer number.

Range of n -> 2-1000000000
Range of K -> 1-50


Sample Input-
512    4
1000000000   9

Sample output-
50
1


*/

#include<stdio.h>

int main()
{
    int n, k, i = 1, lastDigit = 0;
    scanf("%d%d", &n, &k);

    while(i <= k){
        lastDigit = n%10;

        if(lastDigit == 0){
            n = n/10;
        }
        else{
            n = n-1;
        }

        i++;
    }

    printf("%d", n);

    return 0;
}
