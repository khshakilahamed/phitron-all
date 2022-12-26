#include<bits/stdc++.h>

using namespace std;

int x = 5, y, z;

int func(int a, int b)
{
    return a+b;
}

namespace Info
{
    int x = 10;

    int y = 5;

    int func (int a, int b)
    {
        return a*b;
    }
}


int main()
{
    int a = 4;
    int b = 5;

    cout << x << "\n";
    cout << Info::x << "\n";

    int xc = Info::func(a, b);

    cout << xc << "\n";


    return 0;
}
