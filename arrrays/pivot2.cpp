#include<iostream>
using namespace std;

int pivot_element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<e){
        if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid-1]){
            e=mid;
        }
        mid=(s+e)/2;
    }
    return -1;
}

int main(){
    int arr[7]={3, 6, 8, 10, 1, 2, 1};
    int n=7;
    cout<<"the index of pivot element is:"<<pivot_element(arr,n)<<endl;
    return 0;
}