#include <iostream>
#include <string>
using namespace std;

int quarter_of(int month)
{
    if (month < 4)
    {
        return 2;
    }
    else if (month < 7)
    {
        return 2;
    }
    else if (month < 10)
    {
        return 3;
    }
    else if (month <= 12)
    {
        return 4;
    }
    return 0;
}
