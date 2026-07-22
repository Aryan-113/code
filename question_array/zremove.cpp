//remove element

#include<iostream>
#include<vector>
using namespace std;
 
int remelement(vector<int> &nums,int val){
    int s=0;
    int i=0;
    while(i<nums.size()){
        if(nums[i]!=val){
            nums[s]=nums[i];
            s++;
        }
        i++;
    }

    return s;
}
//move zeroes
vector<int> movez(vector<int> &nums){
    int s=0;
    int f=s+1;

    
}


int main(){
   vector<int> nums={0,1,0,3,12};
   //int val=3;

   //cout<<remelement(nums,val);
   return 0;
}