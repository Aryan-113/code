#include<iostream>
#include<vector>
using namespace std;
 
void pass(int arr[],int s,int n){

    if(s>=n){
        return;
    }
    if(arr[s+1]<arr[s]){
        swap(arr[s],arr[s+1]);
    }
    pass(arr,s+1,n);
}

void sss(int arr[],int n){
    if(n<=0){   
        return;
    }

    else{
        pass(arr,0,n);
        sss(arr,n-1);
    }
}

int main(){
   int arr[5]={4,12,5,1,2};
   sss(arr,4);

   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}