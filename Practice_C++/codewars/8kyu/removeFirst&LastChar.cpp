#include <iostream>
#include <string>
using namespace std;

using namespace std;

string sliceString(string str)
{
    // your code is here ... Hope You Enjoy !!
    string reStr = "";
    for (int i = 1; i < str.length() - 1; i++)
    {
        reStr += str[i];
    }
    cout<<reStr;
    return reStr;
}

int main()
{
    sliceString("Boody");
    
}