// left rotate array by 1 place

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   int arr[6]={1,2,3,4,5,6};
   int n=6;

   int temp=arr[0];

   for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
   }
   arr[n-1]=temp;

   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}