#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 

int maxfreq(vector<int> &nums){
    int n=nums.size();

    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
    mpp[nums[i]]++;
    }
    int maxfreq=0;
    int maxel=-1;

    for(auto it:mpp){
        if(it.second>maxfreq){
            maxfreq=it.second;
            maxel=it.first;
        }
    }

    return maxel;

}

int main(){
   vector<int> nums={1,315,12,12,4,14,11};
   int n=nums.size();
   unordered_map<int,int>mpp;

   for(int i=0;i<n;i++){
    mpp[nums[i]]++;
   }

   if (mpp.find(mpp[4]) != mpp.end()) {
    cout << "it exists"<<endl;
    }

    if (mpp.find(mpp[5]) == mpp.end()) {
        cout << "5 does not exist"<<endl;

    }

    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    //cout<<"the max freq element is:"<<maxfreq(nums);
    
        if(mpp.find(13)!=mpp.end()){
            cout<<"found\n";
        }
        else{
            cout<<"not found\n";
        }

    return 0;
}