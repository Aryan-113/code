//selection sort
#include<iostream>
#include<vector>
using namespace std;

void sel_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int ans=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[ans]){
                ans=j;
            }
        }
        swap(arr[i],arr[ans]);
    }
}

int main(){
    int arr[11]={10,1,7,3,4,15,6,64,86,12,12};
    int n=11;

    sel_sort(arr,n);
    for(int val: arr){
        cout<<val<<" ";
    }
    return 0;
}