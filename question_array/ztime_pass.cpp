//kadanes algorithm

#include<iostream>
#include<vector>
using namespace std;
 
vector<int> maxsubarray(vector<int>nums){
    int n=nums.size();

    vector<int> temp;
    int maxsum=INT16_MIN;
    int sum=0;

    int start=0;
    int ansstart=-1;
    int andend=-1;

    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=nums[i];
        
        if(sum>maxsum){
            ansstart=start;
            andend=i;
        }
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }

    vector<int> result;
    for (int i = ansstart; i <= andend; i++) {
        result.push_back(nums[i]);
    }
    return result;
}

int main(){
   vector<int> nums={4,-11,2,4,5,-2,5,2};

   vector<int> ans=maxsubarray(nums);

   for(int val:ans){
    cout<<val<<" ";
   }
   return 0;
}