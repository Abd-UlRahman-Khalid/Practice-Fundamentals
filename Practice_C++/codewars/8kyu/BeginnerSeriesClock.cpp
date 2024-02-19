#include <iostream>
using namespace std;

int past(int h, int m, int s)
{
    int hInMsec = h * 60 * 60 * 1000;
    int mInMsec = m * 60 * 1000;
    int sInMsec = s * 1000;
    int Msec = hInMsec + mInMsec + sInMsec;
    cout << Msec;
    return Msec;
    // your code here
}

int main()
{
    past(0, 1, 1);
}