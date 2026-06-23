#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    vector<int> nums={1,2,3};
    int n=nums.size();

    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            for(int j=n-1;j>i;j--){
                swap(nums[i],nums[j]);
                break;
            }
            reverse(nums.begin() + i + 1, nums.end());
        }
    }

    for(int val:nums){
        cout<<val<<" ";
    }
   return 0;
}