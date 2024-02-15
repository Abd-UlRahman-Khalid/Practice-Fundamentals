#include <iostream>
#include <string>
using namespace std;

std::string removeExclamationMarks(std::string str)
{
  string clean = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '!')
    {
      continue;
    }
    else
    {
      clean += str[i];
    }
  }
  cout << clean;
  // your code here
  return 0;

  
}

int main()
{

  cout << removeExclamationMarks("Boody!!");
}