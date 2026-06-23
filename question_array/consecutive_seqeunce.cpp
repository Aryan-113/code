//longest consecutive sequence

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
 
// int check(vector<int>& nums,int x){
//     int n=nums.size();

//     int count=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]==x+1){
//             check(nums,x+1);
//             count++;
//         }
//     }

//     return count;
// }

int sol(vector<int>& nums,int x){
    int n=nums.size();

    for(int i=0;i<n;i++){
        if(nums[i]==x+1){
            return 1+sol(nums,x+1);
        }
    }

    return 0;
}

int brute(vector<int>&nums){
    int n=nums.size();


    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        count=1+sol(nums,nums[i]);
        maxi=max(maxi,count);
    }

    return maxi;
}

//trying using hash table

// void opt(vector<int> &nums){
//     int n=nums.size();
//     unordered_set<int> st(nums.begin(),nums.end());

//     for(int i=0;i<n;i++){
//         st[nums[i]]++;
//     }
// }

int main(){
   vector<int> nums={0,3,7,2,5,8,4,6,0,1};

   cout<<brute(nums);
   return 0;
}