#include<iostream>
#include<vector>
using namespace std;
 
int bs(vector<int>&nums,int target){
    int n=nums.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

            mid=s+(e-s)/2;
        }
        int ans;
        while(s<=e){
            if(target>nums[s]){
                s++;
                ans=s;
            }
        }
        return s;
}

int main(){
    vector<int> nums={1,3,5,6};
    int target=7;

    cout<<bs(nums,target);
    return 0;
}