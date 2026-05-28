#include<iostream>
#include<vector>
using namespace std;
 
bool issort(int arr[],int n){
    if(n==0||n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=issort(arr+1,n-1);
        return ans;
    }
}

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }

    int ans=arr[n-1]+sum(arr,n-1);

    return ans;


}

int main(){
   int arr[5]={1,2,3,4,5};

   cout<<sum(arr,5);
   return 0;
}