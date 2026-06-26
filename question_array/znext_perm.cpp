//next permuation

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
vector<int> nextp(vector<int>&nums){
    int n=nums.size();

    //firstly finding the breakpoint
    int breakpt;
    for(int i=n-1;i>0;i--){
        if(nums[i]>nums[i-1]){
            breakpt=i-1;
            break;
        }
    }

    int minjust;
    int idx;
    for(int i=breakpt+1;i<n;i++){
        if(nums[i]>nums[breakpt]){
            minjust=min(minjust,nums[i]);
            idx=i;
        }
    }
    swap(nums[breakpt],nums[idx]);

    sort(nums.begin()+breakpt+1,nums.end());

    return nums;
}

int main(){
   vector<int> nums={2,1,5,4,3,0,0};

    vector<int> ans=nextp(nums);

    for(int val:ans){
        cout<<val<<" ";
    }
    // int breakpt=1;
    // int n=nums.size();
    // int minjust;
    // int idx=-1;
    // for(int i=breakpt+1;i<n;i++){
    //     if(nums[i]>nums[breakpt]){
    //         minjust=min(minjust,nums[i]);
    //         idx=i;
    //     }
    // }
    // cout<<minjust<<endl;
    // cout<<idx<<endl;
    // swap(nums[breakpt],nums[idx]);

    // sort(nums.begin()+breakpt+1,nums.end());

    // for(int val:nums){
    //     cout<<val<<" ";
    // }
   return 0;
}



//my leetcode solution intitally i dont know what the fuck i did here
/*class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();

        int idx=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                idx=i-1;
                break;
            }
        }


        if(idx==-1){
        int i=0;
        int j=n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        }
        for(int i=n-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }

        int i=idx+1;
        int j=n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};*/