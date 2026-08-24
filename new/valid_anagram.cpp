#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
bool is(string s,string t){
    if(s.size()!=t.size()) return false;
    unordered_map<int,int>mpp;

    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    for(int i=0;i<t.size();i++){
        mpp[t[i]]--;
        if(mpp[t[i]]<0) return false;
    }
    return true;
}

bool opt(string s,string t){
    vector<int> nums(26);
    for(char ch:s){
        nums[ch-'a']++;
    }

    for(char ch:t){
        nums[ch-'a']--;
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0) return false;
    }

    return true;
}

int main(){
 
   return 0;
}