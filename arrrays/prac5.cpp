#include<iostream>
using namespace std;

int search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
}

int main(){
    int arr[5]={4,56,78,98,99};
    cout<<search(arr,5,99);
    return 0;
}