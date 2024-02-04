#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << " Enter a Number\n";
    cin >> number;

    switch (number)
    {
    case 100:
    case 101:
    case 102:
        cout << "congratz for the Car";
        break;
    case 200:
    case 500:
        cout << "congratz for the Tv";
        break;
    case 300:
    case 600:
        cout << "congratz For the iphone";
        break;
    default:
        cout << "Good Luck";
    }
}