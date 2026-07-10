#include<iostream>
#include<vector>
using namespace std;
 
vector<int> fc(vector<int>nums,int x){
    int s=0;
    int e=nums.size()-1;

    int floor=-1;
    int ceil=-1;
    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==x){
            floor=ceil=nums[mid];
            break;
        }

        if(nums[mid]<x){
            floor=nums[mid];
            s=mid+1;
        }
        else{
            ceil=nums[mid];
            e=mid-1;
        }

    }

    return {floor,ceil};
}

int main(){
   vector<int> nums={3,4,4,7,8,10};
   int x=5;

   vector<int> temp=fc(nums,x);

   for(int val:temp){
    cout<<val<<" ";
   }
   return 0;
}