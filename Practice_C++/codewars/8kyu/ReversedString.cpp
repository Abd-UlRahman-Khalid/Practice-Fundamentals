#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string reversed="";
string reverseString(string str)
{
    // your Code is Here ... enjoy !!!
    for (int i = str.length()-1; i >= 0; i--)
    {
        reversed=reversed+str[i];
    }
    
    cout<<reversed<<"\n";
    return reversed;
}
// string reverseString (string str )
// {
//   // your Code is Here ... enjoy !!!
//     std::reverse(str.begin(), str.end());
//     cout<<reversed<<"\n";
//     return str ;
// }

int main()
{
    reverseString("Boody");
}