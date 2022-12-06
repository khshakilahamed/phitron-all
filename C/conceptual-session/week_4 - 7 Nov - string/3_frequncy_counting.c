/*
steps-
1. Take input/initialization part
2. Find the largest element from the string (string er khettre largest
                                             element is z(Roll number 26)

3. LargestElement+1 size er ekta array niye setake 0 diye fill korlam.
4. String traverse korte frequency array er corresponding location increment kore dilam
5. total koita character ache ta count kore ber kora.
6. Every time next largest and tar corresponding character filter kroe niye ashte hobe
*/


#include<stdio.h>

int main()
{
    char str[] = "bbbbbaccddd";

    int i = 0, largestElement = 26;

    int freq[largestElement+1];

    for(i =0 ; i<= largestElement; i++)
    {
        freq[i]=0;
    }


    int len = strlen(str);

    for(i = 0; i < len; i++)
    {
        freq[(str[i] - 'a')+1]++;
    }


    int total = 0;

    for(i=1; i<=26; i++)
    {
        if(freq[i]>=1)
        {
            total++;
        }
    }

    int next = 0;
    while(next != total)
    {
        int max = -1, index = -1;
        char ch;

        for(int i = 1; i <= 26; i++)
        {
            if(freq[i] > max)
            {
                max = freq[i];
                ch = i+96;
                index = i;
            }
        }

        for(i = 1; i<=max; i++)
        {
            printf("%c", ch);
        }


        freq[index] = 0;
        next++;
    }



    return 0;
}
