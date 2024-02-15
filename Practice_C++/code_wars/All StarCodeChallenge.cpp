#include <iostream>
#include <string>
using namespace std;

int countOccurrences(string str, char chr)
{
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == chr)
        {
            count++;
        }
    }
    cout << count;
    return count;
}

int main()
{
    countOccurrences("Boody",'o');
}