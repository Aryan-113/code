//merge sort
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int s,int mid,int e){
    vector<int>temp;

    int left=s;
    int right=mid+1;
    while(left<=mid && right<=e){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=e){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=s;i<=e;i++){
        arr[i]=temp[i-s];
    }
}
 
void mergesort(vector<int>&arr,int s,int e){
    int mid=(s+e)/2;

    if(s>=e){
        return;
    }
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}


int main(){
   vector<int> arr={11,7,6,1,4};
   mergesort(arr,0,4);
   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}