//maximum subarray sum

#include<iostream>
#include<vector>
using namespace std;
 
//brute forece approach scanning through all the subarrays
//TC --> O(N^2)
int brute(vector<int> &nums){
    int n=nums.size();
    int maximum=INT16_MIN;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            maximum=max(maximum,sum);
        }
    }

    return maximum;
}

//optimized solution
int opt(vector<int> &nums){
    int n=nums.size();

    int sum=0;
    int maximum=INT16_MIN;
    for(int i=0;i<n;i++){
        sum+=nums[i];

        if(sum>maximum){
            maximum=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    return maximum;
}

vector<int> opt_subarray(vector<int> &nums){
    int n=nums.size();

    int start;

    int ansstart=-1;
    int ansend=-1;
    int sum=0;
    int maximum=INT16_MIN;
    for(int i=0;i<n;i++){
        sum+=nums[i];

        if(sum==0){
            start=i;
        }

        if(sum>maximum){
            maximum=sum;
            ansstart=start;
            ansend=i;
        }

        if(sum<0){
            sum=0;
            start=i+1;
        }
    }

    // slice out the subarray using ansstart and ansend
    return vector<int>(nums.begin() + ansstart, nums.begin() + ansend + 1);
}

int main(){
   vector<int> nums={-2,-3,4,-1,-2,1,5,-3};
   cout<<opt(nums)<<endl;

   vector<int> temp=opt_subarray(nums);

   for(int val:temp){
    cout<<val<<" ";
   }
   return 0;
}