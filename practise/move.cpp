#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   vector<int> arr={1,4,3,2,0,21,3,0};
   
   //vector<int>temp(arr.size());
   
   int j=0;
   for(int i=0;i<arr.size();i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
   }

   for(int val:arr){
    cout<<val<<" ";
   }
   return 0;
}