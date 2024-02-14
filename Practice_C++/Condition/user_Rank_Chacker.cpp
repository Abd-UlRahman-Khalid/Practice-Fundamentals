#include <iostream>
using namespace std;

int main()
{
    int points;
    cout << "Enter your Points ";
    cin >> points;
    if (points < 500 && points > 0)
    {
        cout << "Not Bad +_+";
    }
    else if (points >= 500 && points <= 1000)
    {
        cout << "Very Good";
    }
    else if (points > 1000)
    {
        cout << "Strong player -_+ ";
    }
    else
    {
        cout << " You Have No Rank @_@ !!!!!!!";
    }
    return 0;
}