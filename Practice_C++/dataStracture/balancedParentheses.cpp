#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isPair(char start, char end)
{
    if (start == '{' && end == '}')
    {
        return true;
    }
    else if (start == '[' && end == ']')
    {
        return true;
    }
    else if (start == '(' && end == ')')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool areBalanced(string exp)
{
    stack<char> s;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
        {
            s.push(exp[i]);
        }
        else if (exp[i] == ']' || exp[i] == ')' || exp[i] == '}')
        {
            if (s.empty() || !isPair(s.top(), exp[i]))
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return s.empty() ? true : false;
}

int main()
{
    string expression;
    cout << "Enter Your Expression: ";
    cin >> expression;
    if (areBalanced(expression))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
}