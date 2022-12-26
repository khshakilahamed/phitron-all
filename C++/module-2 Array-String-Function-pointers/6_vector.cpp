#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;

    for(int i = 0; i<10; i++)
    {
        cout<< "Before push "<<a.size()<<"\n";
        a.push_back(i);
        cout<< "After push "<<a.size()<<"\n";
    }

    /// insert at the second position
    a.insert(a.begin()+1, 100); /// here, 100 is the inserted value

    for(int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }

    /// erase
    a.erase(a.begin()+0);

    cout<<"After deleted\n";
    for(int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }


    /// delete the last element
    a.pop_back();
    cout<<"After the delete last element\n";
    for(int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }


    return 0;
}
