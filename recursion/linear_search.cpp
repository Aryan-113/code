#include<iostream>
#include<vector>
using namespace std;
 
bool search(int arr[],int n,int key){

        if(n==0){
            return false;
        }
    
        if(key==arr[n-1]){
            return true;
        }
        else{
            return search(arr,n-1,key);
        }
}


int main(){
   int arr[5]={2,4,5,7,8};
   int n=5;
   int key=10;

   if(search(arr,n,key)){
    cout<<"found";
   }
   else{
    cout<<"not found";
   }
   return 0;
}