#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
vector<vector<int>> threesum(vector<int> &nums){
    vector<vector<int>> ans;

    
    for(int i=0;i<nums.size();i++){
        unordered_map<int,int> mpp;
        for(int j=i+1;j<nums.size();j++){
            int compliment=0-nums[i]-nums[j];
            mpp[nums[j]]=j;

            if(mpp.find(compliment)!=mpp.end()){
                ans.push_back({nums[i],nums[j],compliment});
            }

        }
    }

    return ans;
}

int main(){
   vector<int> nums={1,0,1,2,-1,-4};

   vector<vector<int>> temp=threesum(nums);

   for (int i = 0; i < temp.size(); ++i) {
        // matrix[i].size() gives the number of columns in the current row
        for (int j = 0; j < temp[i].size(); ++j) {
            std::cout << temp[i][j] << " ";
        }
        std::cout << "\n";
    }
   return 0;
}