#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int> &nums,int target){
    vector<int> temp;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}


int main(){
   vector<int> nums={3,3};
   int k=6;

    vector<int> v=twosum(nums,k);

    for(int val:v){
        cout<<val<<" ";
    }
   return 0;
}