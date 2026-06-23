//my solution to the dutch national flag algorithm

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   vector<int> arr={1,0,1,2,0,2};
   int n=arr.size();

   int low=0;
   int mid=0;
   int high=n-1;

   while(mid<=high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        mid++;
        low++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
        high--;
    }
   }

   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}