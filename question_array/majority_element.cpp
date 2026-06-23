#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
//Time complexity->O(N)+O(N) therefore O(2N)
//space complexity -> O(N) used unoredered map
int majority(vector<int> &arr){
    int n=arr.size();
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
}

//trying O(n)time complexity and O(1) space

int maj(vector<int> &arr){
    int n=arr.size();

    int count=0;

    for(int i=0;i<n;i++){

    }
}


int main(){
   vector<int> arr={2,2,1,1,1,2,2};
   cout<<majority(arr);
   return 0;
}