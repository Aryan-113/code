#include<iostream>
#include<vector>
using namespace std;
 
int bs(vector<int> &nums,int k){
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(nums[mid]==k){
            return mid;
        }
        else if(nums[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    return -1;
}

int main(){
   vector<int> nums={12,13,414,1414};
   cout<<bs(nums,1414);
   return 0;
}