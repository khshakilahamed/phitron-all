#include<iostream>

using namespace std;

int main()
{
    freopen("2.2_input.txt", "r", stdin);
    freopen("2.2_output.txt", "w", stdout);

    string s;
    // take input until get space
    // cin >> s;

    // take input the whole line
    getline(cin, s);

    cout <<s<<"\n";


    return 0;
}
