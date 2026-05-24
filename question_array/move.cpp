#include<iostream>
using namespace std;



int main(){
    int arr[7]={1,13,5,0,35,0,5};
    int n=7;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int temp=arr[n-1];
            arr[i]=arr[i+1];
            arr[n-1]=0;
            arr[n-2]=arr[n-1];
        }
    }
    return 0;
}