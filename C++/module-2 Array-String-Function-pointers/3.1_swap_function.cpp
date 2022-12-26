#include<bits/stdc++.h>

using namespace std;

void Swap(int &x, int &y)
{
    int temp = y;
    y = x;
    x = temp;;
}

int main()
{
    int x, y;
    cin >> x >> y;

    Swap(x, y);

    cout <<x << " " << y << "\n";

}
