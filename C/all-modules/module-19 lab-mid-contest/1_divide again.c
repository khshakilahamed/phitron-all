/*
Problem Statement--

You are given a positive integer N. You want to divide the value among 3 people such that every person get the same amount. If it is not possible to give same amount to 3 people, print -1 otherwise print the amount.

Input Format
-You will be given a positive integer N.

Constraints-
1 <= N <= 10^9

Output Format
-Print how much amount everyone will get.


Sample Input 0
12

Sample Output 0
4

*/


#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n%3 == 0)
    {
        printf("%d", n/3);
    }
    else
    {
        printf("-1");
    }


    return 0;
}
