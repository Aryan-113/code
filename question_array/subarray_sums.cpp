//leetcode 974
//subarray sums divisible by k

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int div(vector<int> &nums,int k){
    int n=nums.size();

    unordered_map<int,int> mpp;
    mpp[0]=1;
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        int rem;
        if(sum<0){
            rem=-(sum)%k;
        }
        else{
            rem=sum%k;
        }

        if(mpp.find(rem)!=mpp.end()){
            count+=mpp[rem];
            mpp[rem]++;
        }
        else{
            mpp[rem]++;
        }

    }
    return count;
}

int main(){
   vector<int> nums={2,-2,2,4};
   int k=6;

   cout<<div(nums,k);
//    int ans=-(-1)%2;
//    cout<<ans;
   return 0;
}