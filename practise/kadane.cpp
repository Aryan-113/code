#include<iostream>
#include<vector>
using namespace std;
 
vector<int> maxSubArray(vector<int>& nums) {
        int n=nums.size();

        int maxi=INT8_MIN;
        int sum=0;
        int start=0;

        int end=0;

        int anstart=0, ansend=0;

        for(int i=0;i<n;i++){
            if(sum==0){
                start=i;
            }
            sum+=nums[i];
            
            if(sum>maxi){
                maxi=sum;
                ansend=i;
            }
            if(sum<0){
                sum=0;
            }
        }

    return {anstart,ansend};
}

int main(){
    vector<int> nums={2, 3, 5, -2, 7, -4};

    vector<int> temp=maxSubArray(nums);

    for(int val:temp){
        cout<<val<<" ";
    }
   return 0;
}