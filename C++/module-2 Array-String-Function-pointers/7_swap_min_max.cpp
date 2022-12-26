#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = 4, b = 5;

    /// swap
    swap(a, b);
    cout<< a << " " << b<<"\n";

    /// minimum between 2 values
    int mini = min(a, b);
    cout<<mini<<"\n";


    /// maximum between 2 values
    int maxx = max(a, b);
    cout << maxx<<"\n";



    int x = 3, y = 5, z = 1, p = 2;
    /// minimum value among 3 or more value
    int minn = min({x, y, z, p});
    cout << minn << "\n";

    /// maximum value among 3 or more value
    int maxx_2 = max({x, y, z, p});
    cout <<maxx_2 << "\n";


    /// sorting
    vector<int> abc = {3, 5, 2, 5, 1};

    cout << "Before Sorted: \n";
    for(int i = 0; i<abc.size(); i++)
        cout<<abc[i]<<" ";

    cout<<"\n";

    /// sort from index 1 to index 2
    // abc.end() = abc.begin() + abc.size()
    sort(abc.begin()+1, abc.begin()+2+1);
    cout << "Sort from index 1 to index 2: \n";
    for(int i = 0; i<abc.size(); i++)
        cout<<abc[i]<<" ";

    cout<<"\n";


    /// sort all
    sort(abc.begin(), abc.end());
    cout << "After sorting: \n";
    for(int i = 0; i<abc.size(); i++)
        cout<<abc[i]<<" ";


    return 0;
}
