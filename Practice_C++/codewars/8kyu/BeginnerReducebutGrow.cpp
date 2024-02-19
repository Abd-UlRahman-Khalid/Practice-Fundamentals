#include <iostream>
#include <vector>
using namespace std;

int grow(std::vector<int> nums)
{
    // your code here
    int multiples = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        multiples *= nums[i];
    }
    cout<<multiples;
    return multiples;
}

int main()
{
    grow({1, 2, 3, 4});
}