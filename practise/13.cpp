#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>&nums){
    for(int val:nums){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> nums = {0, 0, 3, 3, 5, 6};
    vector<int>temp;
    temp.push_back(nums[0]);
    int s = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        while (nums[i] != nums[i - 1])
        {
            temp.push_back(nums[i]);
        }
        print(temp);
    }   
    return 0;
}