//lower bound
#include<iostream>
#include<vector>
using namespace std;
 
int lb(vector<int> nums,int x){
    int s=0;
    int e=nums.size()-1;

    int ans=nums.size();
    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]>=x){
            ans=mid;
            e=mid-1;
        }

        else{
            s=mid+1;
        }
    }
    return ans;
}

int ub(vector<int> nums,int x){
    int s=0;
    int e=nums.size()-1;

    int ans=nums.size();
    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]>x){
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
   vector<int>nums={1,4,5,7,7,8,10};

   cout<<ub(nums,7);
   return 0;
}