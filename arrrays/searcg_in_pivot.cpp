//search an integer in an roated array

#include<iostream>
using namespace std;

int pivot(int arr[],int n){
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

int bs(int pivot,int arr[],int n,int k){

    if(k>=arr[pivot]&&k<=arr[n-1]){
        int s=pivot;
        int e=n-1;
        int mid=(s+e)/2;

        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return -1;
    }

    else{
        int s=0;
        int e=pivot-1;
        int mid=(s+e)/2;

        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]>k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return -1;
    }
}

int main(){
    int arr[7]={7,8,1,2,3,4,5};
    int n=7;
    
    int piv=pivot(arr,n);
    cout<<"the pivot element is at index:"<<piv<<endl;

    int k=3;
    cout<<"the given element is present at the index:"<<bs(piv,arr,n,k);
    return 0;
}
