//find peak element in an mounted array
//leetcode 852

#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
}

int main(){
    int arr[7]={1,5,6,8,4,3,2};
    int n=7;

    cout<<peak(arr,n);
    return 0;
}