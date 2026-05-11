//wrong logic works only for when it is sorted like
//for eg[8,9,10,1,4,5] and fails for [8,9,10,1,4,1]

//and if the array is already sorted then it will give wrong result as arr[n] does not exist
//and same for if the pivot elemnt is at oth index

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