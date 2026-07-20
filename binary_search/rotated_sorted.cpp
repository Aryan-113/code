//search in a rotated sorted array 1
#include<iostream>
#include<vector>
using namespace std;
 
int rs(const vector<int> nums,int x){
    int s=0;
    int e=nums.size()-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==x){
            return mid;
        }

        //if this is true then the right half is sorted

        //left half sorted
        else if(nums[s]<=nums[mid]){
            if(x>=nums[s]&&x<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        //right half sorted
        else{
            if(x>nums[mid]&&x<=nums[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
}

int main(){
    vector<int> nums={7,8,9,1,2,3,4,5,6};
    int target=1;
   return 0;
}