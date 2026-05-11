#include<iostream>
using namespace std;

int bs(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid +1;
        }
        mid=start+(end-start)/2;
    }

    return -1;
    
}

int main(){
    int arr[7]={3,5,6,8,22,45,69};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=69;

    cout<<"the element is present at:"<<bs(arr,n,key);

    return 0;
}