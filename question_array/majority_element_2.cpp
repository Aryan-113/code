#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
vector<int> maj_element(vector<int>&nums){
    vector<int> temp;
    unordered_map<int,int> mpp;
    int threshold = nums.size() / 3;
    for(int val:nums){
        mpp[val]++;

        if(mpp[val]>threshold){
            if (std::find(temp.begin(), temp.end(), val) == temp.end()) {
                temp.push_back(val);
            } 
        }
    }

    return temp;
}

//trying for optimal solution
vector<int> trying(vector<int>&nums){
    vector<int> temp;
    int i=0;

    while(i<nums.size()){
        int count=0;
        int j=0;
        while(j<nums.size()){
            if (find(temp.begin(), temp.end(), nums[i]) != temp.end()) {
                break;
            }
            if(nums[i]==nums[j]){
                count++;
            }
            if(count>nums.size()/3){
                temp.push_back(nums[i]);
                break;
            }
            j++;
        }
        i++;
    }

    return temp;
}
//took even more time crying crying emoji

//two-candidate approach most optimal solution
vector<int> optimal(vector<int> nums){
    vector<int> temp;
    int cand1,cand2;
    int count1=0,count2=0;

    for(int i=0;i<nums.size();i++){
        if(count1>0&&nums[i]==cand1){
            count1++;
        }
        else if(count2>0&&nums[i]==cand2){
            count2++;
        }
        else if(count1==0){
            cand1=nums[i];
            count1=1;
        }
        else if(count2==0){
            cand2=nums[i];
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
    }

    int cnt1=0,cnt2=0;
    for(int i=0;i<nums.size();i++){
        if(cand1==nums[i]){
            cnt1++;
        }
        if(cand2==nums[i]){
            cnt2++;
        }
    }
    if(cnt1>nums.size()/3){
        temp.push_back(cand1);
    }
    if(cnt2>nums.size()/3&&cand1!=cand2){
        temp.push_back(cand2);
    }

    return temp;
}


int main(){
   vector<int> nums={3,2,3};

   vector<int> ans=optimal(nums);
   for(int val:ans){
    cout<<val<<" ";
   }
   return 0;
}