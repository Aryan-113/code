#include<iostream>
#include<vector>
using namespace std;
 
int bs(vector<int> nums,int s,int e,int target){
    
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]<target){
        return bs(nums,mid+1,e,target);
    }
    else{
        return bs(nums,s,mid-1,target);
    }
}

int main(){
   vector<int> nums={1,2,3,4,5};
   int n=nums.size()-1;
   int target=3;
   cout<<bs(nums,0,n,target);
   return 0;
}