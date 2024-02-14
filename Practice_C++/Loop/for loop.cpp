#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i <= 6; i++)
    // {
    //     cout << i << "\n";
    // }

    // int nums[4] = {100, 200, 300, 400};
    // int numsCount=sizeof(nums)/sizeof(nums[0]); //4
    // for (int i = 0; i < numsCount; i++)
    // {
    //     cout << nums[i] << "\n";
    // }

    int nums[4] = {100, 200, 300, 400};
    int numsCount = sizeof(nums) / sizeof(nums[0]); // 4
    int i = 0;

    for (;;)
    {
        cout << nums[i] << "\n";
        i++;
        if (i == numsCount)
        {
            break;
        }
    }

    return 0;
}