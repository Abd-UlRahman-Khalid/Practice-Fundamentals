#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter Three Numbers" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is the Greatest Number";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the Greatest Number";
    }
    else
    {
        cout << c << " is the Greatest Number";
    }
    return 0;
}