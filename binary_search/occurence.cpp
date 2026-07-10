//first and last occurence of a given number in the array
#include<iostream>
#include<vector>
using namespace std;
 
vector<int> fal(vector<int>&nums,int k){
    int n=nums.size();

    int s=0;
    int e=n-1;

    int first=-1;
    int last=-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==k){
            int sec=s;
            while(sec<=e){
                if(nums[mid]==k){
                    mid=sec+(e-sec)/2;
                    last=mid;
                    sec=mid+1;
                }
            }
            int en=e;
            while(s<=en){
                if(nums[mid]==k){
                    mid=s+(en-s)/2;
                    first=mid;
                    en=mid-1;
                }
            }
        }

        else if(nums[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

    return {first,last};
}

//using 2 searches for finding the first and last occurence
vector<int> opt(vector<int> nums,int k){
    int s=0;
    int e=nums.size()-1;
    int first=-1;
    //first occurence
    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==k){
            first=mid;
            e=mid-1;
        }
        else if(nums[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

    int st=0;
    int en=nums.size()-1;
    //last occurence
    int last=-1;
    while(st<=en){
        int midd=st+(en-st)/2;

        if(nums[midd]==k){
            last=midd;
            st=midd+1;
        }
        else if (nums[midd]<k)
        {
            st=midd+1;
        }
        else{
            en=midd-1;
        }
        
    }


    return {first,last};
}


int opttttt(vector<int> nums,int k){
    int s=0;
    int e=nums.size()-1;
    int first=-1;
    //first occurence
    while(s<=e){
        int mid=s+(e-s)/2;

        if(nums[mid]==k){
            first=mid;
            e=mid-1;
        }
        else if(nums[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

    int st=0;
    int en=nums.size()-1;
    //last occurence
    int last=-1;
    while(st<=en){
        int midd=st+(en-st)/2;

        if(nums[midd]==k){
            last=midd;
            st=midd+1;
        }
        else if (nums[midd]<k)
        {
            st=midd+1;
        }
        else{
            en=midd-1;
        }
        
    }


    return last-first+1;
}

int main(){
   vector<int> nums={0,0,1,1,1,2,3};
   int target=3;

//    vector<int> temp=opt(nums,target);

//    for(int val:temp){
//     cout<<val<<" ";
//    }


    cout<<opttttt(nums,target);

   return 0;
}