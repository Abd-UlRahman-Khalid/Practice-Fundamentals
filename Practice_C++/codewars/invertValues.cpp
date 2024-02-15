#include <iostream>
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    for (int i = 0; i < values.size(); i++)
    {
        values[i] *= -1;
    }
    return values;
}

int main()
{
    invert({1, 2, 3, 4, 5});
    std::cout << invert;
}