#include <iostream>
using namespace std;

int main()
{
    int n1, n2, choose;
    cout << "Enter Two Numbers\n";
    cin >> n1 >> n2;
    cout << "Choose Operation Number \n";
    cout << "[1] Add \n";
    cout << "[2] Subtract \n";
    cout << "[3] Multiply \n";
    cout << "[4] Divide \n";
    cin >> choose;
    if (choose == 1)
    {
        cout << n1 + n2 << endl;
    }
    else if (choose == 2)
    {
        cout << n1 - n2 << endl;
    }
    else if (choose == 3)
    {
        cout << n1 * n2 << endl;
    }
    else if (choose == 4)
    {
        cout << n1 / n2 << endl;
    }
    else
    {
        cout << "Wrong Number Try Again";
    }
    return 0;
}