//subarray_sum_optimized.cpp
//oprimimzed approach using hashing and map

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
int longestsubarray(int arr[],int n,int k){
    unordered_map<int,int> prefixindex;

    int sum=0;
    int maxlen=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==k){
        maxlen = max(maxlen,i+1);
        }

        int rem =sum-k;

        if(prefixindex.find(rem)!=prefixindex.end()){
            int len = i - prefixindex[rem];
            maxlen = max(maxlen, len);
        }

        if(prefixindex.find(sum)==prefixindex.end()){
            prefixindex[sum]=i;
        }
    }

    return maxlen;

}

int main(){
    int arr[9]={1,2,3,1,1,1,1,3,3};

    cout<<longestsubarray(arr,9,6);

   return 0;
}