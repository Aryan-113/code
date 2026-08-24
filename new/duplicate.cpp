#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool vs(vector<int>&nums){
    unordered_set<int>stt;
    for(int i=0;i<nums.size();i++){
        if(stt.find(nums[i])!=stt.end()){
            return false;
        }

        stt.insert(nums[i]);
    }

    return true;
}

int main(){
 
   return 0;
}