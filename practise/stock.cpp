//buy and sell stock
#include<iostream>
#include<vector>
using namespace std;
 
int best(vector<int> &nums){
    //TC-->O(N^2)
    int n=nums.size();

    int bestpr=0;

    for(int i=0;i<n;i++){
        int price;
        for(int j=i;j<n;j++){
            price=nums[j]-nums[i];
            if(price>0){
                bestpr=max(bestpr,price);
            }
        }
    }

    return bestpr;
}

int better(vector<int> &nums){
    //TC--> O(2N)
    int n=nums.size();

    int lowest=nums[0];
    int idx=0;
    for(int i=1;i<n;i++){
        if(nums[i]<lowest){
            lowest=nums[i];
            idx=i;
        }
    }

    int minprice=0;
    int diff=0;
    for(int i=idx+1;i<n;i++){
        diff=nums[i]-nums[idx];
        if(diff>0){
            minprice=max(minprice,diff);
        }
    }

    return minprice;
}

int main(){
   vector<int> nums={7,1,5,3,6,4};

   cout<<better(nums);
   return 0;
}