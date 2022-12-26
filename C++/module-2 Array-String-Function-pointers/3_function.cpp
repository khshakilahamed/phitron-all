#include<bits/stdc++.h>

using namespace std;

string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}

void erase_first_last_2(string &s)
{
    s.erase(s.begin());
    s.pop_back();

    cout<< "In functions = "<<s<<"\n";
}



int main()
{
    string s;
    cin>> s;

    // string ans = erase_first_last(s);
    // cout<<ans<<"\n";

    erase_first_last_2(s);

    cout<<s;



    return 0;
}
