//#include<bits/stdc++.h>

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("2.3_output.txt");

    ofstream outputFile2;
    outputFile2.open("2.3.2_output.txt");

    ifstream inputFile;

    inputFile.open("2.3_input.txt");

    int x;
    double y, z;

    inputFile >> x >> y >> z;

    cout << x<< " " << y << " " << z;


    outputFile<<"Hello World\n";
    outputFile2<<"Hello World Bangladesh\n";


    inputFile.close();
    outputFile.close();
    outputFile2.close();




    return 0;
}
