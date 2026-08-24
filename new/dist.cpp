#include <iostream>
#include <vector>
using namespace std;

vector<int> resultArray(vector<int> &nums)
{
    if (nums.size() <= 1)
    {
        return nums;
    }
    vector<int> arr1;
    vector<int> arr2;

    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]);

    for (int i = 2; i < nums.size(); i++)
    {
        if (arr1.back() > arr2.back())
        {
            arr1.push_back(nums[i]);
        }
        else
        {
            arr2.push_back(nums[i]);
        }
    }
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    return arr1;
}

int main()
{
    vector<int> nums = {5};
    // vector<int> arr1;
    // vector<int> arr2;

    // arr1.push_back(nums[0]);
    // arr2.push_back(nums[1]);

    // for (int i = 2; i < nums.size(); i++)
    // {
    //     if (arr1.back() > arr2.back())
    //     {
    //         arr1.push_back(nums[i]);
    //     }
    //     else
    //     {
    //         arr2.push_back(nums[i]);
    //     }
    // }
    // cout << "arr1" << endl;
    // for (int val : arr1)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << "arr2" << endl;
    // for (int val : arr2)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
    // arr1.insert(arr1.end(), arr2.begin(), arr2.end());

    // for (int val : arr1)
    // {
    //     cout << val << " ";
    // }

    vector<int> ans=resultArray(nums);
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}