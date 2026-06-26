// binary search on 2d array

#include<iostream>
#include<vector>
using namespace std;
 
pair<int,int> bs(vector<vector<int>>&nums,int target){
    int row=nums.size();
    int col=nums[0].size();

    int start=0;
    int end=row*col-1;

    int mid=start+(end-start)/2;

    while(start<=end){

        int element=nums[mid/col][mid%col];

        if(element==target){
            return {mid/col,mid%col};
        }

        if(element<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return {-1,-1};
}

int main(){
   vector<vector<int>> nums={{1,3,5,7},{10,11,16,20},{23,30,34,60}};

   pair<int,int> ans=bs(nums,61);


   cout<<ans.first<<" "<<ans.second;

   /*
   int row=nums.size();
   int col=nums[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<nums[i][j]<<" ";
        }

        cout<<endl;
    }
    */
   return 0;
}