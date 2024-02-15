#include <iostream>
#include <string>
using namespace std;

using namespace std;

string repeatStr(string str,int n)
{
    // your code is here ... Hope You Enjoy !!
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += str;
    }
    cout<<result;
    return result;
}

int main()
{
    repeatStr("Boody",2);
    
}