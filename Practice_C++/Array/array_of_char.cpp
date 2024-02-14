#include <iostream>
#include <array>
using namespace std;

int main()
{
    char name[] = "AbdUlRahman";
    cout << name << "\n";         // AbdUlRahman
    cout << sizeof(name) << "\n"; // 12
    cout << name[5] << endl;      // R
    cout << name[0] << endl;     //A
    cout << name[11] << endl;  // Nul \0 => ASCII VAlUE=>0
    char yes[] = {'A','b','d','U','\0'};
    cout << yes << "\n";         // AbdUlRahman
    cout << sizeof(yes) << "\n"; // 12
    cout << yes[5] << endl;      // R
    cout << yes[0] << endl;     //A
    cout << yes[2] << endl;  // Nul \0 => ASCII VAlUE=>0

}