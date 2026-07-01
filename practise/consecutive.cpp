#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
 
int longest(vector<int> nums){
    int n=nums.size();

    unordered_set<int> st;

    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }

    int maxi=0;

    for(auto num : st){
        if(st.find(num-1)==st.end()){
            int count=1;
            int next=num+1;
            while(st.find(next)!=st.end()){
                count++;
                next++;
            }

            maxi=max(maxi,count);
        }
    }

    return maxi;
}

int main(){
    vector<int> nums={100,4,200,0,1,2,3};

   return 0;
}