//merging intervals in an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
vector<vector<int>> merge(vector<vector<int>> &nums){
    int n=nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());

    int last


}

int main(){
   vector<vector<int>> matrix={{1,3},{2,6},{15,18},{8,10}};

   
   sort(matrix.begin(), matrix.end());
   
   for (size_t i = 0; i < matrix.size(); ++i) {
        // matrix[i].size() gives the number of elements in the current row
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
   return 0;
}