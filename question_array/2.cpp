//largest element in an array

#include<iostream>
#include<vector>
using namespace std;
 
int largest(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

//2nd largest element
int secound_lar(int arr[],int n){
    int large=arr[0];
    int sec=-1;

    for(int i=1;i<n;i++){
        if(arr[i]>large){
            sec=large;
            large=arr[i];
        }
    }

    return sec;
}

int main(){
   int arr[5]={1,2,2,2,2};
   int n=5;

   cout<<largest(arr,5)<<endl;
   cout<<secound_lar(arr,5)<<endl;
   return 0;
}