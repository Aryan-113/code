#include<iostream>
#include<vector>
using namespace std;
 
//revision of 2 sum
vector<int> two(vector<int>&nums,int target){
    int n=nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
   vector<int> nums={3,2,4};
   int target=6;

   vector<int>temp=two(nums,target);

   for(int val:temp){
    cout<<val<<" ";
   }
   return 0;
}