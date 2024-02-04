#include <iostream>
using namespace std;

int main()
{

    // int nums[6] = {100, 200, 300, 400, 500, 600};
    // int numsCount = sizeof(nums) / sizeof(nums[0]);
    // for (int i = 0; i < numsCount; i++)
    // {
    //     cout << nums[i] << "\n";
    //     i++; //to print 100 , 300 , 500
    // }

    int nums[6] = {100, 200, 300, 400, 500, 600};
    int numsCount = sizeof(nums) / sizeof(nums[0]);

    for (int i = 5; i >= 2; i--)
    {
        cout << nums[i] << "\n";
        //to print 600 , 500 , 400 , 300
    }

    return 0;
}