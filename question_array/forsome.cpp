#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        int i=0;
        int j=nums.size()-1;
        int count=0;

        while(i<j){
            int left=i+1;
            int right=j-1;
            while(left<right){

                if(nums[i]+nums[j]+nums[left]+nums[right]==target){
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});

                    left++;
                    right--;

                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(nums[i]+nums[j]+nums[left]+nums[right]>target){
                    right--;
                }
                else{
                    left++;
                }
            }
            i++;
            j--;
        }

        return ans;
    }

vector<vector<int>> foursum(vector<int> &nums,int k){
    /*
    int left=i+1;
            int right=j-1;
            while(left<right){

                if(nums[i]+nums[j]+nums[left]+nums[right]==target){
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});

                    left++;
                    right--;

                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(nums[i]+nums[j]+nums[left]+nums[right]>target){
                    right--;
                }
                else{
                    left++;
                }
            }
            i++;
            j--;

            */
}

int main(){
 
   return 0;
}