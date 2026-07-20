//koko eating bananas in a given amount og hour

#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int req_time(vector<int> nums,int hour){

    int tot_hour=0;
    for(int i=0;i<nums.size();i++){
        tot_hour+=ceil(static_cast<double>(nums[i])/hour);
    }

    return tot_hour;

}

int optimal_appr(vector<int> nums,int h){
    int s=0;
    int e=0;
    for(int val:nums){
        if(val>e){
            e=val;
        }
    }

    while (s<e){
        int mid=s+(e-s)/2;

        if(req_time(nums,mid)==h){
            e=mid-1;
        }
        else if(req_time(nums,mid)<h){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        return mid;
    }

    
}

int main(){
    vector<int> nums={3,6,7,11};

    int h=8;

    cout<<optimal_appr(nums,h);
    // cout<<req_time(nums,4);


   return 0;
}