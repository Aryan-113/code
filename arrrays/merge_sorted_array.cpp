//merge_sorted_array.cpp

#include<iostream>
#include<vector>
using namespace std;

void  merge_sort(vector<int>& nums1,vector<int>& nums2,int m,int n){
    
    for(int i=0;i<n;i++){
        nums1[m+i]=nums2[i];
    }

    for(int val:nums1){
        cout<<val<<" ";
    }
    cout<<endl;
}

void sorting(vector<int>& nums1,int m){
    for(int i=0;i<m;i++){
        int ans=i;
        for(int j=i+1;j<m;j++){
            if(nums1[j]<nums1[ans]){
                ans=j;
            }
        }
        swap(nums1[i],nums1[ans]);
    }
}

int main(){
    vector<int> nums1={1,2,3,0,0,0};
    int m=3;

    vector<int> nums2={2,5,6};
    int n=nums2.size();

    merge_sort(nums1,nums2,m,n);
    sorting(nums1,m+n);

    for(int val:nums1){
        cout<<val<<" ";
    }
    return 0;
}