#include<iostream>

using namespace std;

int main()
{
    int x, y;
    char ch;
    float f;
    double d;


    // >> -> extraction operator
    cin >> x >> ch >> f >> d;

    // << -> insertion operator
    cout << "x: " << x <<" "<< "char: " << ch << " " << "float: " << f << " " << "double: " << d << "\n";


    string name ="Shakil", sentance ="loves you";
//    cin >> name >> sentance;

    cout << name << " " << sentance;



    return 0;
}
