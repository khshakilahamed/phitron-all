#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int sum=0;

    int mult=1;

    for(int i=0; i<n; i++)
    {
        sum += a[i];
        mult = mult * a[i];
    }


    cout << sum <<"\n";
    cout << mult;



    return 0;
}
