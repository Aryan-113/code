#include<iostream>
#include<vector>
using namespace std;
 
void rotate(int arr[],int st,int end){
    //0 to d
    //start is 0 and end is d

    while(st<end-1){
        swap(arr[st],arr[end-1]);
        st++;
        end--;
    }
}

void dplace(int arr[],int n,int d){

    rotate(arr,0,d);
    rotate(arr,d,n);
    rotate(arr,0,n);
}

int main(){
   int arr[7]={1,2,3,4,5,6,7};
   int n=7;
   int d=3;

   dplace(arr,7,3);

   for(int val:arr){
    cout<<val<<" ";
   }cout<<endl;

//    rotate(arr,0,2);
//    for(int val:arr){
//     cout<<val<<" ";
//    }cout<<endl;
   return 0;
}