//quick sort
#include<iostream>
#include<vector>
using namespace std;
 
int partition(vector<int> &arr,int low,int high){
   int pivot=arr[low];
   int j=low+1;

   for(int i=low+1;i<=high;i++){
      if(arr[i]<pivot){
         swap(arr[i],arr[j]);
         j++;
      }
   }

   swap(arr[low],arr[j-1]);

   return j-1;
}

void qs(vector<int>&arr,int low,int high){
   if(low>=high){
      return;
   }

   int pivotindex=partition(arr,low,high);

   qs(arr,low,pivotindex-1);
   qs(arr,pivotindex+1,high);

}


int main(){
   vector<int> arr={4,6,2,5,7,9,1,3};
   qs(arr,0,arr.size()-1);

   for(int val:arr){
      cout<<val<<" ";
   }
   return 0;
}