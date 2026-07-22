#include <iostream>
#include <vector>
using namespace std;

int getarea(vector<int> &nums, int left, int right)
{
    int area;
    if (nums[left] > nums[right])
    {
        area = nums[right] * (right - left);
    }
    else
    {
        area = nums[left] * (right - left);
    }

    return area;
}

int maxArea(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;

    int maxi = 0;
    int area = getarea(nums, s, e);
    while (s < e)
    {
        if (getarea(nums, s + 1, e) > maxi)
        {
            area = getarea(nums, s + 1, e);
            s++;
        }
        else if (getarea(nums, s, e - 1) > maxi)
        {
            area = getarea(nums, s, e - 1);
            e--;
        }
        else
        {
            s++;
            e--;
        }

        maxi = max(maxi, area);
    }

    return maxi;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,25,24,3,4};

    int s=0;
    int e=nums.size()-1;

    int area;
    if(nums[s]<nums[e]){
        area=nums[s]*(e-s);
    }
    else{
        area=nums[e]*(e-s);
    }

    while(s<e){
        

    }

    return 0;
}