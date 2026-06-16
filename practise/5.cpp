//slection sort
#include<iostream>
#include<vector>
using namespace std;
 
void insert(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}


int main(){
   int arr[6]={13,46,9,52,20,24};
   insert(arr,6);
   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}