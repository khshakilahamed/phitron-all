#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "I_am_eating_rice.";
    string s2 = "I_am_also_eating_dal.";

//    string s3 = " I am eating rice. I am also eating dal.";

    // access characters
    cout<<s[0]<<"\n";
    cout<<s[1]<<s[2]<<"\n";

    // string size;
    cout<<s.size()<<"\n";



    // delete last character of a string.
    s.pop_back();
    cout<<s<<"\n";

    // delete first character of a string.
    // s.erase(s.begin()+0);
    // s.erase(s.begin());
    s.erase(s.begin()+1);
    cout<<s<<"\n";

    for(int i=0; i<s.size(); i++)
    {
        s[i] = s[i] + 1;
    }
    cout<<s<<"\n";

    string s3 = s + s2;

    // cout<<s3<<"\n";


    return 0;
}
