//first_last_occ.cpp
//first and last occurence of an element in an sorted arrat

#include<iostream>
#include<utility>
using namespace std;

int fir_occ(int arr[],int n,int key){
    int str=0;
    int end=n-1;
    int mid=str+(end-str)/2;
    int ans=-1;

    while(str<=end){
        if(arr[mid]==key){

            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            str=mid+1;
        }
        mid=str+(end-str)/2;
    }
    return ans;

}

int last_occ(int arr[],int n,int key){
    int str=0;
    int end=n-1;
    int mid=str+(end-str)/2;
    int ans=-1;

    while(str<=end){
        if(arr[mid]==key){

            ans=mid;
            str=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            str=mid+1;
        }
        mid=str+(end-str)/2;
    }
    return ans;

}

int main(){
    int arr[6]={1,5,7,7,7,9};
    int n=6;
    int key=7;

    cout<<"first occurence if "<<key<<" is at index: "<<fir_occ(arr,n,key)<<endl;
    cout<<"last occurence if "<<key<<" is at index: "<<last_occ(arr,n,key)<<endl;
    cout<<"total number of occurence:"<<last_occ(arr,n,key)-fir_occ(arr,n,key)+1;
    return 0;
}