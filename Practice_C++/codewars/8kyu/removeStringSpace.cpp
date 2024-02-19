#include <iostream>
#include <string>
using namespace std;

string removeSpaceStr(string str)
{
    string reStr = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            reStr += str[i];
        }
    }
    cout<<reStr;
    return reStr;
}

int main()
{
    removeSpaceStr("B O o D y");
}