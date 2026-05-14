#include<iostream>
using namespace std;

int pivot_element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int main(){
    int arr[7]={3, 6, 8, 10, 1, 2, 1};
    int n=7;
    cout<<"the index of pivot element is:"<<pivot_element(arr,n)<<endl;
    return 0;
}