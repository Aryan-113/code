#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
vector<int> lead(vector<int> &nums){
    vector<int> temp;
    int n=nums.size();

    for(int i=0;i<n-1;i++){
        bool swapp=true;
        for(int j=i;j<n-1;j++){
            if(nums[j]<nums[j+1])
            swapp=false;
            break;
        }
        if(swapp==true){
            temp.push_back(nums[i]);
        }
    }

    temp.push_back(nums[n-1]);

    return temp;
}

vector<int> opti(vector<int>&nums){
    int n=nums.size();
    vector<int> ans;

    int maxi=nums[n-1];

    ans.push_back(nums[n-1]);

    for(int i=n-2;i>=0;i--){
        if(nums[i]>maxi){
            maxi=nums[i];
            ans.push_back(nums[i]);
        }
    }

    reverse(ans.begin(),ans.end());

    return ans;
}

int main(){
   vector<int> nums={1, 2, 5, 3, 1, 2};

   vector<int> ans=opti(nums);

   for(int val:ans){
    cout<<val<<" ";
   }
   return 0;
}