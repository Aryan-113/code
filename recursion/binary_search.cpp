#include<iostream>
#include<vector>
using namespace std;
 
bool bin_search(int arr[],int n,int key,int s,int e){

    if(s>e){
        return false;
    }

    int mid=(s+e)/2;

    if (key==arr[mid]){
        return true;
    }
    else if(arr[mid]>key){
        return bin_search(arr,n,key,s,mid-1);
    }
    else{
        return bin_search(arr,n,key,mid+1,e);
    }
    
}

int main(){
   int arr[5]={2,5,7,8,9};
   int n=5;
   int key=2;

   if(bin_search(arr,n,key,0,n-1)){
    cout<<"found";
   }
   else{
    cout<<"not found";
   }
   return 0;
}