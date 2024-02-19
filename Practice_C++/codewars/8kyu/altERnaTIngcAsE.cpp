#include <iostream>
#include <string>
using namespace std;

// std::string to_alternating_case(const std::string &str)
// {
//     string result = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] < ('a'))
//         {
//             result += tolower(str[i]);
//         }
//         else
//         {
//             result += toupper(str[i]);
//         }
//     }
//     cout << result << endl;
//     return result;
// }
std::string to_alternating_case(std::string str)
{
    for (char &c : str)
    {
        if (c >= 'a' && c <= 'z')
        {
            c += 'A' - 'a';
            /*
            c is small character ASCII value c = 99 A=65 a=97
            c=c+(A-a)=c+(65-97)=c+(-32)=99-32=67 , which is the ASCII Value of letter C
            32 is the no. of the alphabetical characters
            so by subtracting 32 from the ASCII value of the small char change into capital char
            */
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c -= 'A' - 'a';
            /*
            C is capital character ASCII value C = 67 A=65 a=97
            C=C-(A-a)=c-(65-97)=c-(-32)=67+32=99 , which is the ASCII Value of letter c
            32 is the no. of the alphabetical characters
            so by adding 32 on the ASCII value of the capital char change into small char
            */
        }
    }
    cout << str;
    return str;
}

int main()
{
    int A = 'A';//65
    int a = 'a';//97
    cout << A << endl;
    cout << a << endl;
    to_alternating_case("BoOdy");
}