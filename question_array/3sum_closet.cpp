#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int threesumcloset(vector<int>& nums, int k)
{
    sort(nums.begin(), nums.end());
    int ans = 100;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int l = i + 1;
        int r = nums.size() - 1;

        while (l < r)
        {
            int diff = k - (nums[i] + nums[l] + nums[r]);
            ans = min(ans, diff);
            if (diff > k)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-1, 2, 1, -4};
    int k = 1;
    sort(nums.begin(), nums.end());
    int ans = 100;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int l = i + 1;
        int r = nums.size() - 1;

        while (l < r)
        {
            int sum=nums[i] + nums[l] + nums[r];
            int diff = k - (nums[i] + nums[l] + nums[r]);
            

            cout<<"diff:"<<diff<<endl;
            cout<<"ans:"<<ans<<endl;
            if (sum > k)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }

    //cout<<ans<<endl;
    // cout<<threesumcloset(nums,target);
    return 0;
}