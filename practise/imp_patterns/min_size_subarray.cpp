#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int dome(vector<int> &nums,int k){
    int n=nums.size();
    int count=0;
    int mincount=INT8_MAX;
    int cs=0;

    unordered_map<int,int> mpp;
    mpp[0]=1;
    int r=0;

    for(int i=0;i<n;i++){
        cs+=nums[i];

        
        if(mpp.find(cs-k)!=mpp.end()){
            count++;
            mincount=min(count,mincount);
        }
        
        mpp[cs]++;
        
        if(cs>k&&r<=i){
            cs-nums[r];
            if(count>0){
                count--;
            }
            r++;
        }
    }

    return mincount;
}

int main(){
    vector<int> nums={2,3,1,2,4,3};
    int target=7;
   return 0;
}