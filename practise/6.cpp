//bubble sort
#include<iostream>
#include<vector>
using namespace std;
 
void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }

        if(swapped==false){
            break;
        }
    }
}

int main(){
   int arr[6]={13,46,9,52,20,24};
   bubble(arr,6);
   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}