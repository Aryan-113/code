#include<iostream>
#include<vector>
using namespace std;
 
void srrt(vector<int>&nums){
   int w=0;
   int b=nums.size()-1;
   int r=0;

   while(w<=b){
      if(nums[w]==1){
         w++;
      }
      else if(nums[w]==0){
         swap(nums[w],nums[r]);
         r++;
      }
      else{
         swap(nums[w],nums[b]);
         b--;
      }
   }
}
//P
int main(){
   vector<int> nums={2,1,0};
   srrt(nums);

   for(int val:nums){
      cout<<val<<" ";
   }
   return 0;
}