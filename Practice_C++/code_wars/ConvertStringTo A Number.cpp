#include <iostream>
#include <string>
using namespace std;

int string_to_number(const std::string &s)
{
    // your code here
    int intValue = std::stoi(s); // stoi=> s(string) to i (integer) 
    
    return intValue;
}

int main()
{
    int s;
    s = string_to_number("123")+string_to_number("123");
    cout<<s;
}