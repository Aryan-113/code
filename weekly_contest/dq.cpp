#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
 
int missingint(vector<int>&nums){
    unordered_set<int> stt;

    for(int val:nums){
        stt.insert(val);
    }
    long long sum=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]+1){
            sum+=nums[i];
        }
        else{
            break;
        }
    }
    cout<<"the sum is:"<<sum<<endl;
    while(sum<INT32_MAX){
        cout<<sum<<endl;
        if(stt.find(sum)==stt.end()){
            return sum;
        }
        else{
            sum++;
        }
    }

    return -1;
}

int main(){
   vector<int>nums={29,30,31,32,33,34,35,36,37};
   cout<<missingint(nums);
   return 0;
}