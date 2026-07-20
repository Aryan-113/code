//minimum in rotated sorted array
#include<iostream>
#include<vector>
using namespace std;
 
int msa(vector<int> &nums){
    int s=0;
    int e=nums.size()-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]<nums[e]){
            
        }
    }
}

int main(){
   vector<int> nums={4,5,6,7,0,1,2};
   return 0;
}