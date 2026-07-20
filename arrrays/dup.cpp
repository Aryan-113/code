//removing duplicates

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
 
int removedup(vector<int> &nums){
    unordered_set<int> st;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    return st.size();
}

int main(){
    vector<int> nums={1,1,2,2,3,5,6,7,8,8};
    cout<<removedup(nums);

    // unordered_set<int> st;
    // for(int i=0;i<nums.size();i++){
    //     st.insert(nums[i]);
    // }
    // //return st.size()

    // for (const int& element : st) {
    //     cout << element << " ";
    // }

   return 0;
}