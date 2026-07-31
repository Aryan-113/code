#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int max1 = nums[0];
    int max2 = nums[1];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > max2 && nums[i] <= max1)
        {
            max2 = nums[i];
        }
        if (nums[i] > max1)
        {
            max2 = max1;
            max1 = nums[i];
        }
    }

    return (max1 - 1) * (max2 - 1);
}

int main()
{
vector<int> nums={10,2,5,2};

cout<<maxProduct(nums);
    return 0;
}