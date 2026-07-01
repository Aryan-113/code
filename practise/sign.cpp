#include<iostream>
#include<vector>
using namespace std;
 
vector<int> oplo(vector<int>&nums){
    int n=nums.size();

    vector<int>temp(n,0);

    int pos=0;
    int neg=1;

    for(int i=0;i<n;i++){
        if(nums[i]>0){
            temp[pos]=nums[i];
            pos=pos+2;
        }
        else{
            temp[neg]=nums[i];
            neg=neg+2;
        }
    }

    return temp;
}

int main(){
   vector<int> nums={5,-3,6,-12,-8,1,4,5};

   vector<int> temp=oplo(nums);
   for(int val:temp){
    cout<<val<<" ";
   }
   return 0;
}