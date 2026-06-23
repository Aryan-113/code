//better solution using hashmap

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
string read(vector<int> &arr,int n,int target){
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        int a=arr[i];
        int more=target-a;

        if(mpp.find(more)!=mpp.end()){
            return "YES";
        }
        mpp[a]={i};
    }

    return "NO";
}

vector<int> read_indices(vector<int> &arr,int n,int target){
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        int a=arr[i];
        int more=target-a;

        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[a]={i};
    }

    return {-1,-1};
}

int main(){
   vector<int> arr={2,6,5,8,11};
   vector<int> temp=read_indices(arr,5,14);

   for(int val:temp){
    cout<<val<<" ";
   }
   return 0;
}