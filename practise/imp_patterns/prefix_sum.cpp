//subarrays with sum equals to k

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int ore(vector<int>&nums,int k){
    int n=nums.size();

    //hashmap
    //key-> prefix sum value
    //Value-> how many times preifx sum occured
    unordered_map<int,int> mpp;

    mpp[0]=1; //we use it since when the sum is directly equals to k the hashmap will find the 0 but it wont exist therefore
    //we initialize the key value 0 with 1

    int currentsum=0;
    int count=0;


    for(int i=0;i<n;i++){
        currentsum+=nums[i];

        if (mpp.find(currentsum - k) != mpp.end()) {
            count += mpp[currentsum - k]; //we add the frequency here and not 1 beacuse tthere may be multiple times thatvalue
        //might have appeared
        //since the array may contain zeroes
        }

        mpp[currentsum]++;
    }

    return count;

}

int main(){
   vector<int> nums={1,2,3};
   int k=3;
   return 0;
}