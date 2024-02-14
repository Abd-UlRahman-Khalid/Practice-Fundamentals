#include <iostream>
using namespace std;

int main()
{
    //count the +ve and even no only
    int result = 0;
    int nums[] = {
        10,
        20,
        -30,
        40,
        13,
        -50,
        -60,
        -70,
    };
    int numsCount = size(nums);

    for (int i = 0; i < numsCount; i++)
    {
        if (nums[i] % 2 == 0 && nums[i]>0)
        {
            result+= nums[i];
        }
    }
    cout << "the Result Is: " << result;
    return 0;
}