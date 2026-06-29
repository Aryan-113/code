//total number of subarrays whose sum equals to k

#include<iostream>
#include<vector>
using namespace std;
 
int total(vector<int> &nums,int target){
    int n=nums.size();

    int count=0;
    int i=0;
    int j=0;
    int sum=0;
    while(i<n && j<n){
        sum+=nums[i];
        if(sum==target){
            count++;
        }
        if(sum<target){
            j++;
        }
    }
}

int main(){
   vector<int> nums={-1,1,0};
   int target=0;

   cout<<total(nums,target);
   return 0;
}