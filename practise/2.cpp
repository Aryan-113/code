//insertion sort

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int arr[5]={5,10,3,2,4};

    insertion(arr,5);
    for(int val:arr){
        cout<<val<<" ";
    }
   return 0;
}