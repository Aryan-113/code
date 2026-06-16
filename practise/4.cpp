//binary search
#include<iostream>
#include<vector>
using namespace std;

int search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}

int main(){


    int arr[5]={1,2,3,4,5};

    cout<<"the element is present at:"<<search(arr,5,5);
   return 0;
}