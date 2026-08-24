//bucket sort uses the fact that any element can only have freq less then the length of the array
//hence we count the freq instead of sorting pairs
// between 1 and n
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
 
int main(){
    int k=2;
    vector<int> nums={1,1,1,5,5,8,10};

    //freqeuncy map
    //num->count
    unordered_map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }

    //create bucket
    vector<vector<int>> bucket(nums.size()+1);
    for(auto it:mpp){
        bucket[it.second].push_back(it.first);
    }

    //walking through the bucket to get the k most freq elemens
    vector<int> ans;
    for(int i=nums.size();i>=1&&ans.size()<k;i--){
        for(int num:bucket[i]){
            if(ans.size()<k){
                ans.push_back(num);
            }
        }
    }
   return 0;
}