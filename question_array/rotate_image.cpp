//rotate the 2d array by 90degree

#include<iostream>
#include<vector>
using namespace std;
 
vector<vector<int>> rotatee(vector<vector<int>> &nums){
    //the matrix is nxn
    int n=nums.size();

    vector<vector<int>> copy=nums;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            nums[i][j]=copy[j][n-i-1];
        }
    }

    return nums;
}

int main(){
   vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};

   vector<vector<int>> ans=rotatee(nums);

   int n=nums.size();
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<nums[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}