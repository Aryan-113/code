//next permutation

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
vector<int> np(vector<int>nums){
    int n=nums.size();

    int breakpt=-1;
    for(int i=n-1;i>0;i--){
        if(nums[i]>nums[i-1]){
        breakpt=i-1;
        break;
        }
    }

    if(breakpt==-1){
        reverse(nums.begin(),nums.end());
        return nums;
    }


    for(int i=n-1;i>breakpt;i--){
        if(nums[i]>nums[breakpt]){
            swap(nums[i],nums[breakpt]);
            break;
        }
    }

    reverse(nums.begin()+breakpt+1,nums.end());

    return nums;
}

int main(){
    vector<int>nums={5,7,8,1,4,0,0};

    vector<int> temp=np(nums);

    for(int val:temp){
        cout<<val<<" ";
    }

   return 0;
}