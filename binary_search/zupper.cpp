//upper bound

//it means the largest element just after the target
#include<iostream>
#include<vector>
using namespace std;

int ub(vector<int> nums,int target){
    int s=0;
    int e=nums.size()-1;
    int ans=nums.size();

    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]>target){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return ans;
}

//lower bound
//it is the min or equal to element equal to target

int lb(vector<int> nums,int target){
    int s=0;
    int e=nums.size()-1;

    int ans=nums.size();

    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]>=target){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={3,5,8,15,19};
    //cout<<ub(nums,6)<<endl;

    cout<<lb(nums,9);
   return 0;
}