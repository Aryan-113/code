//frequently appearing k elements
#include<iostream>
#include<vector>
#include<map>
using namespace std;
 
int main(){
   vector<int> nums={1,1,2,3,3,3};
   map<int,int> mpp;
   for(int i=0;i<nums.size();i++){
    mpp[nums[i]]++;
   }

   int k=2;
   for(auto it:mpp){
    cout<<it.first<<"-->"<<it.second<<endl;
   }
   return 0;
}