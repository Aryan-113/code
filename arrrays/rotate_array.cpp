#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> v,int k){
    int n=v.size();
    for(int i=n-1;i<k;i++){
        v.push_front(i);
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;

    rotate(arr,n,k);

    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}