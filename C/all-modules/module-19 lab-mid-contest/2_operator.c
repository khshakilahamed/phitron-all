/*

Problem Statement-
You are given a string S consisting only +(Addition),*(Multiplication). The next line will contain two positive values.

Now, Calculate the sum of every operations. See the explanation for more clarification.

Input Format-
* First line contains a string S, consisting only +(Addition),*(Multiplication) operator.
* The second line will contain two positive integers a and b

Constraints
1. 1 <= |S| <= 20, where |S| means the length of S.
2. 1<= a, b <= 50


Output Format
* Print the summation which were perform based on String S.


Sample Input 0
+*
5 10

Sample Output 0
65


Explanation 0
1. when S[i] = '+',Then a+b = 5 + 10 = 15 and sum = 15
2. when S[i] = '*',Then a*b = 5 * 10 = 50 and sum = 15 + 50 = 65


Sample Input 1
+***+
2 1

Sample Output 1
12

*/

#include<stdio.h>

int main()
{
    char s[21];
    fgets(s, sizeof(s), stdin);

    int a, b;
    scanf("%d%d", &a, &b);

    int sum=0, mul=1, len=strlen(s), i, result=0;

    for(i=0; i<len;i++)
    {
        if(s[i] == '+')
        {
            sum=a+b;
            result += sum;
        }
        else if(s[i] == '*')
        {
            mul = a*b;
            result += mul;
        }
    }

    printf("%d\n", result);


    return 0;
}
