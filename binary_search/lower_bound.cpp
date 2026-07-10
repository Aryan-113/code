#include<iostream>
#include<vector>
using namespace std;
 
int lowbound(vector<int> &nums,int x){
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(nums[mid]>=x){
            if(nums[mid-1]>=x){
                while(nums[mid-1]>=x){
                    mid--;
                }
                return mid;
            }
            else{
                return mid;
            }
        }
        else{
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }

    return -1;
}

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



int main(){
   vector<int> nums={1,2,2,2,2,2,2,3};
   cout<<lb(nums,2);
   return 0;
}