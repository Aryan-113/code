//merge sort algorithm
#include<iostream>
#include<vector>
using namespace std;

//in the merge sort first we need to write the programe to divide it in individual elements
//splits
void merge(vector<int>& nums,int s,int mid, int e){
    vector<int>temp;

    int left=s;
    int right=mid+1;

    while(left<=mid && right<=e){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }

    while(right<=e){
        temp.push_back(nums[right]);
        right++;
    }
    for (int i = s; i <= e; i++) {
        nums[i] = temp[i - s];
    }
}

void mergeSort(vector<int>&nums,int s,int e){
    if(s>=e){
        return;
    }

    int mid=(s+e)/2;
    mergeSort(nums,s,mid);
    mergeSort(nums,mid+1,e);
    merge(nums,s,mid,e);
}

int main(){
   vector<int> nums={4,1,2,3,5};
   for(int val:nums){
        cout<<val<<" ";
    }
    cout<<endl;
    mergeSort(nums,0,4);
    for(int val:nums){
        cout<<val<<" ";
    }
   return 0;
}