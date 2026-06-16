//insertion sort
#include<iostream>
#include<vector>
using namespace std;
 
void is(int v[],int n){
   //we assume first element is already sorted
   for(int i=1;i<n;i++){
      int j=i;
      while(j>0){
         if(v[j-1]>v[j]){
            int temp=v[j-1];
            v[j-1]=v[j];
            v[j]=temp;

            j--;
         }
         else{
            break;
         }
      }
   }
}

int main(){
   int arr[5]={12,11,13,5,6};
   is(arr,5);
   for(int val:arr){
      cout<<val<<" ";
   }
   return 0;
}