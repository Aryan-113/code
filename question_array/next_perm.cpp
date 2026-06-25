// find the next permutation

#include<iostream>
#include<vector>
using namespace std;
 
//finding breaking point
int breaking(vector<int>&nums){
    int n=nums.size();

    int ind=-1;
    for(int i=n-1;i>0;i--){
        if(nums[i]>nums[i-1]){

            ind=i;
            break;
        }
    }

    return ind-1;
}

int main(){
   vector<int> nums={2,1,5,4,3,0,0};
   int n=nums.size();
   cout<<n<<endl;
   cout<<breaking(nums);
   return 0;
}