//nums[i] + nums[j] + nums[k] == 0

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<set>
using namespace std;
 
vector<vector<int>> threesum(vector<int>&nums){
    vector<vector<int>> temp;
    unordered_map<int,int> mpp;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int ans=0-(nums[i]+nums[j]);
            if(mpp.find(ans)!=mpp.end()){
                temp.push_back({i,j,mpp[ans]});
            }
            mpp[nums[j]]=j;
        }

        mpp[nums[i]]=i;
    }

    return temp;
}

vector<vector<int>> threesum_optimal(vector<int>&nums){
    unordered_map<int,int> mpp;

    set<vector<int>> unique;
    
    int j=1;
    for(int i=0;i<nums.size()-1;i++){
        int ans=0-(nums[i]+nums[j]);
        if(mpp.find(ans)!=mpp.end()){
            vector<int> triplet={nums[i],nums[j],ans};

            sort(triplet.begin(),triplet.end());

            unique.insert(triplet);
        }
        mpp[nums[i]]=i;
        j++;
    }
    vector<vector<int>> temp;(unique.begin(),unique.end());
    return temp;
}


//corrected code
vector<vector<int>> threesum_optimal_final(vector<int>&nums){
    set<vector<int>> unique_triplets;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        unordered_map<int, int> mpp;
        
        for (int j = i + 1; j < n; j++) {
            int ans = 0 - (nums[i] + nums[j]);
            
            if (mpp.find(ans) != mpp.end()) {
                vector<int> triplet = {nums[i], nums[j], ans};
                sort(triplet.begin(), triplet.end());
                unique_triplets.insert(triplet);
            }
            mpp[nums[j]] = j;
        }
    }
    vector<vector<int>> temp(unique_triplets.begin(), unique_triplets.end());
    return temp;
}

int main(){
   vector<int> nums={0,0,0,0}; 

   vector<vector<int>> matrix=threesum_optimal(nums);

    for (size_t i = 0; i < matrix.size(); ++i) {
    // matrix[i].size() gives the number of columns in that specific row
    for (size_t j = 0; j < matrix[i].size(); ++j) {
        std::cout << matrix[i][j] << " ";
    }
    std::cout << "\n";
    }

   return 0;
}