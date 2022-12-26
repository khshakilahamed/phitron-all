#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    cout<<s<<"\n";

    s.erase(s.begin() + 3);
    cout<<s<<"\n";

    s.pop_back();
    cout<<s<<"\n";



    return 0;
}
