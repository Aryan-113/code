//it is slightly good when we only need to return yes or no
//without using map

#include<iostream>
#include<vector>
using namespace std;
 
void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//if we want to return the indices we need to store the index and value somewhere
//it will be less optimal if we do so
string two_sum(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    while(left<right){

        if(arr[left]+arr[right]==target){
            return "YES";
        }

        if(arr[left]+arr[right]>target){
            right--;
        }
        if(arr[left]+arr[right]<target){
            left++;
        }
    }

    return "NO";
}

int main(){
   int arr[5]={2,6,5,8,11};
   int n=5;
   int target=12;

   bubble_sort(arr,n);

   cout<<two_sum(arr,n,target);
   
   return 0;
}