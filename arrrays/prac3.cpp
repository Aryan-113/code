#include<iostream>
using namespace std;
#include<vector>

vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ans=i;
            for(int j=0;j<n-1;j++){
                if(nums[ans]>nums[j]){
                    ans=j;
                }
            }
            
        }
}

int main(){
    return 0;
}