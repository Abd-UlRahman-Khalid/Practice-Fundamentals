#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char fname[] = "AbdUlRahman";
    char lname[] = "Khalid";
    cout << fname << lname << "\n";
    cout << strcat(fname, lname) << "\n";

    string first_name = "Abd-UlRahman";
    string last_name = "khalid";
    cout << first_name + last_name<< "\n";
    cout <<first_name.append(last_name)<< "\n";
    return 0;
}