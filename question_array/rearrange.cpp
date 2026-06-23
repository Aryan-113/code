//rearrange array elements by sign

#include<iostream>
#include<vector>
using namespace std;
 
//brute force
vector<int> rear(vector<int> &nums){
    int n=nums.size();

    vector<int> temp;

    vector<int> pos;
    vector<int> neg;

    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            temp.push_back(pos[a]);
            a++;
        }
        else{
            temp.push_back(neg[b]);
            b++;
        }
    }

    return temp;

}

vector<int> better(vector<int> &nums){
    int n=nums.size();

    vector<int> ans;

    int posindex=0;
    int negindex=1;

    for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negindex]=nums[i];
            posindex+=2;
        }
        else{
            ans[posindex]=nums[i];
            posindex+=2;
        }
    }

    return ans;
}

int main(){
   vector<int> nums={3,1,2,-5,-2,-4};

   vector<int> tp=rear(nums);

   for(int val: tp){
    cout<<val<<" ";
   }
   return 0;
}